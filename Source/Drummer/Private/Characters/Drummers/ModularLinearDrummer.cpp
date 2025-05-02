#include "Characters/Drummers/ModularLinearDrummer.h"
#include "Characters/Drummers/ModularLinearDrummerAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "HAL/PlatformFilemanager.h"
#include "Characters/Mappings/BoneToModuleRow.h"
#include "Misc/Paths.h"
#include "Engine/Engine.h"

AModularLinearDrummer::AModularLinearDrummer()
{
	PrimaryActorTick.bCanEverTick = true;
	DatabasePath = FPaths::ProjectContentDir() + TEXT("Database/drummer_data.db");
	bDatabaseOpen = false;
	CurrentTargetFrameIndex = 0;

	// Set up bone-to-module mapping.
	UDataTable *BoneModuleDataTable = LoadObject<UDataTable>(nullptr, TEXT("/Game/Blueprints/Characters/DT_BoneToModuleMap.DT_BoneToModuleMap"));
	if (BoneModuleDataTable)
	{
		TArray<FBoneToModuleRow *> AllRows;
		BoneModuleDataTable->GetAllRows(TEXT("BoneToModuleMap"), AllRows);
		for (FBoneToModuleRow *Row : AllRows)
		{
			if (Row)
			{
				BoneToModuleMap.Add(Row->BoneName, Row->ModuleName);
			}
		}
	}
	// Removed local ModuleStates.
	// The ModuleRulesManager already initializes module statuses.
}

void AModularLinearDrummer::BeginPlay()
{
	Super::BeginPlay();

	if (GetMesh())
	{
		GetMesh()->SetAnimInstanceClass(UModularLinearDrummerAnimInstance::StaticClass());
		GetMesh()->bEnableUpdateRateOptimizations = false;

		LoadAnimationFromDatabase();

		SortedFrameKeys.Empty();
		AnimationFrames.GetKeys(SortedFrameKeys);
		SortedFrameKeys.Sort();

		UE_LOG(LogTemp, Log, TEXT("ModularLinearDrummer: Loaded %d animation frames."), AnimationFrames.Num());

		// Set up default idle poses for all modules.
		SetupDefaultIdlePoses();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Skeletal mesh is null in ModularLinearDrummer::BeginPlay."));
	}

	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDIFileNoteEvent.AddDynamic(this, &AModularLinearDrummer::OnMIDINoteReceived);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Turquoise, TEXT("Bound to MIDIBroadcaster!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("MIDIBroadcaster is not assigned in ModularLinearDrummer."));
	}
}

void AModularLinearDrummer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AModularLinearDrummer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (Database.IsValid())
	{
		Database.Close();
		bDatabaseOpen = false;
		UE_LOG(LogTemp, Log, TEXT("Closed SQLite database connection in EndPlay."));
	}
}

void AModularLinearDrummer::LoadAnimationFromDatabase()
{
	if (!FPaths::FileExists(DatabasePath))
	{
		UE_LOG(LogTemp, Error, TEXT("Database file not found: %s"), *DatabasePath);
		return;
	}

	if (!bDatabaseOpen)
	{
		if (Database.Open(*DatabasePath))
		{
			bDatabaseOpen = true;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to open SQLite database."));
			return;
		}
	}

	// Join MIDIEvents with AnimationData based on SessionID and FrameIndex.
	FString Query = TEXT(
		"SELECT MIDIEvents.NoteID, AnimationData.FrameIndex, BoneName, "
		"LocalPos_X, LocalPos_Y, LocalPos_Z, "
		"LocalRot_X, LocalRot_Y, LocalRot_Z, LocalRot_W, "
		"LocalScale_X, LocalScale_Y, LocalScale_Z "
		"FROM AnimationData "
		"INNER JOIN MIDIEvents ON MIDIEvents.SessionID = AnimationData.SessionID "
		"AND MIDIEvents.FrameIndex = AnimationData.FrameIndex "
		"WHERE AnimationData.SessionID = 9 "
		"ORDER BY AnimationData.FrameIndex;");

	FSQLitePreparedStatement Statement;
	if (Statement.Create(Database, *Query))
	{
		while (Statement.Step() == ESQLitePreparedStatementStepResult::Row)
		{
			int32 MidiNote;
			Statement.GetColumnValueByIndex(0, MidiNote);

			int32 FrameIndex;
			if (Statement.GetColumnValueByIndex(1, FrameIndex))
			{
				// Add the MIDI note to an array for this frame.
				if (!FrameIndexToMidiNote.Contains(FrameIndex))
				{
					FrameIndexToMidiNote.Add(FrameIndex, TArray<int32>());
				}
				FrameIndexToMidiNote[FrameIndex].Add(MidiNote);

				FString BoneNameStr;
				Statement.GetColumnValueByIndex(2, BoneNameStr);
				FName BoneName(*BoneNameStr);

				FVector Position;
				FQuat Rotation;
				FVector Scale;

				Statement.GetColumnValueByIndex(3, Position.X);
				Statement.GetColumnValueByIndex(4, Position.Y);
				Statement.GetColumnValueByIndex(5, Position.Z);

				Statement.GetColumnValueByIndex(6, Rotation.X);
				Statement.GetColumnValueByIndex(7, Rotation.Y);
				Statement.GetColumnValueByIndex(8, Rotation.Z);
				Statement.GetColumnValueByIndex(9, Rotation.W);

				Statement.GetColumnValueByIndex(10, Scale.X);
				Statement.GetColumnValueByIndex(11, Scale.Y);
				Statement.GetColumnValueByIndex(12, Scale.Z);

				FTransform BoneTransform(Rotation, Position, Scale);

				if (!AnimationFrames.Contains(FrameIndex))
				{
					AnimationFrames.Add(FrameIndex, TMap<FName, FTransform>());
				}
				AnimationFrames[FrameIndex].Add(BoneName, BoneTransform);
			}
		}

		UE_LOG(LogTemp, Log, TEXT("Loaded %d animation frames (joined with MIDI events)."), AnimationFrames.Num());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to prepare SQLite statement."));
	}
}

void AModularLinearDrummer::SetupDefaultIdlePoses()
{
	// Ensure we have at least one frame loaded
	if (SortedFrameKeys.Num() > 0)
	{
		int32 IdleFrameIndex = SortedFrameKeys[0]; // Using the first frame as the idle reference.
		TMap<FName, FTransform> IdlePose;
		if (GetAnimationFrameData(IdleFrameIndex, IdlePose))
		{
			// Build a module-specific idle pose.
			for (const auto &Pair : IdlePose)
			{
				FName BoneName = Pair.Key;
				if (BoneToModuleMap.Contains(BoneName))
				{
					FString ModuleName = BoneToModuleMap[BoneName];
					if (!TargetModulePoses.Contains(ModuleName))
					{
						TargetModulePoses.Add(ModuleName, TMap<FName, FTransform>());
					}
					TargetModulePoses[ModuleName].Add(BoneName, Pair.Value);
				}
			}
			UE_LOG(LogTemp, Log, TEXT("Default idle poses set for %d modules."), TargetModulePoses.Num());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Could not extract idle pose from frame %d."), IdleFrameIndex);
		}
	}
}

TArray<int32> AModularLinearDrummer::GetMatchingFrameIndicesForMidiNote(int32 MidiNote)
{
	TArray<int32> MatchingFrames;
	for (int32 FrameIndex : SortedFrameKeys)
	{
		if (FrameIndexToMidiNote.Contains(FrameIndex))
		{
			const TArray<int32> &NotesForFrame = FrameIndexToMidiNote[FrameIndex];
			if (NotesForFrame.Contains(MidiNote))
			{
				MatchingFrames.Add(FrameIndex);
			}
			else
			{
				// Debug logging for frames that do not match.
				FString NotesStr;
				for (int32 Note : NotesForFrame)
				{
					NotesStr += FString::FromInt(Note) + TEXT(" ");
				}
				UE_LOG(LogTemp, Verbose, TEXT("Frame %d does not contain MIDI note %d. Contains: %s"), FrameIndex, MidiNote, *NotesStr);
			}
		}
	}
	return MatchingFrames;
}

bool AModularLinearDrummer::GetAnimationFrameData(int32 FrameIndex, TMap<FName, FTransform> &OutBoneData) const
{
	if (AnimationFrames.Contains(FrameIndex))
	{
		OutBoneData = AnimationFrames.FindChecked(FrameIndex);
		return true;
	}
	return false;
}

bool AModularLinearDrummer::GetModuleTargetPose(const FString &ModuleName, TMap<FName, FTransform> &OutBoneData) const
{
	if (TargetModulePoses.Contains(ModuleName))
	{
		OutBoneData = TargetModulePoses.FindChecked(ModuleName);
		return true;
	}
	return false;
}

void AModularLinearDrummer::OnMIDINoteReceived(int32 Channel, int32 NoteID, int32 Velocity, float Timestamp)
{
	// Determine which module should respond to this note.
	FString SelectedModule = ModuleRulesManager.GetModuleForNote(NoteID);
	UE_LOG(LogTemp, Warning, TEXT("Selected module for note %d is: %s"), NoteID, *SelectedModule);

	if (SelectedModule == "Default")
	{
		UE_LOG(LogTemp, Warning, TEXT("No available module for MIDI note %d"), NoteID);
		return;
	}

	// Get matching animation frames for the note.
	TArray<int32> MatchingFrames = GetMatchingFrameIndicesForMidiNote(NoteID);
	if (MatchingFrames.Num() > 0)
	{
		int32 SelectedFrameIndex = MatchingFrames[FMath::RandRange(0, MatchingFrames.Num() - 1)];
		CurrentTargetFrameIndex = SelectedFrameIndex;
		UE_LOG(LogTemp, Log, TEXT("Set target frame to %d for MIDI note %d"), SelectedFrameIndex, NoteID);

		TMap<FName, FTransform> RetrievedPose;
		if (GetAnimationFrameData(SelectedFrameIndex, RetrievedPose))
		{
			// Filter the retrieved pose by module.
			TMap<FName, FTransform> ModuleHitPose;
			for (const auto &Pair : RetrievedPose)
			{
				if (BoneToModuleMap.Contains(Pair.Key) && BoneToModuleMap[Pair.Key] == SelectedModule)
				{
					ModuleHitPose.Add(Pair.Key, Pair.Value);
				}
			}

			// Update the target pose for the selected module.
			TargetModulePoses.Add(SelectedModule, ModuleHitPose);
			ModuleRulesManager.SetModuleStatus(SelectedModule, EModuleState::Hit);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to get animation frame data for frame %d"), SelectedFrameIndex);
		}

		// Log the current status of each module using the ModuleRulesManager.
		for (const auto &RulePair : ModuleRulesManager.ModuleRules)
		{
			const FString &ModuleName = RulePair.Key;
			EModuleState Status = RulePair.Value.Status;
			FString StatusString;
			switch (Status)
			{
			case EModuleState::Idle:
				StatusString = TEXT("Idle");
				break;
			case EModuleState::Hit:
				StatusString = TEXT("Hit");
				break;
			case EModuleState::Returning:
				StatusString = TEXT("Returning");
				break;
			default:
				StatusString = TEXT("Unknown");
				break;
			}
			UE_LOG(LogTemp, Warning, TEXT("Module %s status after MIDI event: %s"), *ModuleName, *StatusString);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No animation data found for MIDI note %d"), NoteID);
	}
}