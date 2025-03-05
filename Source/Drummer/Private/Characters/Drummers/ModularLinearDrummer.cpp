#include "Characters/Drummers/ModularLinearDrummer.h"
#include "Characters/Drummers/ModularLinearDrummerAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/Paths.h"
#include "Engine/Engine.h"

AModularLinearDrummer::AModularLinearDrummer()
{
	PrimaryActorTick.bCanEverTick = true;
	DatabasePath = FPaths::ProjectContentDir() + TEXT("Database/drummer_data.db");
	bDatabaseOpen = false;
	CurrentTargetFrameIndex = 0;

	// Set up bone-to-module mapping.
	// Right Leg
	BoneToModuleMap.Add(TEXT("RightThigh"), TEXT("RightLeg"));
	BoneToModuleMap.Add(TEXT("RightShin"), TEXT("RightLeg"));
	BoneToModuleMap.Add(TEXT("RightFoot"), TEXT("RightLeg"));
	BoneToModuleMap.Add(TEXT("RightToe"), TEXT("RightLeg"));

	// Left Leg
	BoneToModuleMap.Add(TEXT("LeftThigh"), TEXT("LeftLeg"));
	BoneToModuleMap.Add(TEXT("LeftShin"), TEXT("LeftLeg"));
	BoneToModuleMap.Add(TEXT("LeftFoot"), TEXT("LeftLeg"));
	BoneToModuleMap.Add(TEXT("LeftToe"), TEXT("LeftLeg"));

	// Right Arm (and fingers)
	BoneToModuleMap.Add(TEXT("RightShoulder"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightArm"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightForeArm"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightHand"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger1Metacarpal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger1Proximal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger1Distal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger2Metacarpal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger2Proximal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger2Medial"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger2Distal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger3Metacarpal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger3Proximal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger3Medial"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger3Distal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger4Metacarpal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger4Proximal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger4Medial"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger4Distal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger5Metacarpal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger5Proximal"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger5Medial"), TEXT("RightArm"));
	BoneToModuleMap.Add(TEXT("RightFinger5Distal"), TEXT("RightArm"));

	// Left Arm (and fingers)
	BoneToModuleMap.Add(TEXT("LeftShoulder"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftArm"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftForeArm"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftHand"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger1Metacarpal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger1Proximal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger1Distal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger2Metacarpal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger2Proximal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger2Medial"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger2Distal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger3Metacarpal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger3Proximal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger3Medial"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger3Distal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger4Metacarpal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger4Proximal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger4Medial"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger4Distal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger5Metacarpal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger5Proximal"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger5Medial"), TEXT("LeftArm"));
	BoneToModuleMap.Add(TEXT("LeftFinger5Distal"), TEXT("LeftArm"));

	// Body
	BoneToModuleMap.Add(TEXT("Base"), TEXT("Body"));
	BoneToModuleMap.Add(TEXT("Hips"), TEXT("Body"));
	BoneToModuleMap.Add(TEXT("Spine1"), TEXT("Body"));
	BoneToModuleMap.Add(TEXT("Spine2"), TEXT("Body"));
	BoneToModuleMap.Add(TEXT("Spine3"), TEXT("Body"));
	BoneToModuleMap.Add(TEXT("Spine4"), TEXT("Body"));
	BoneToModuleMap.Add(TEXT("Neck"), TEXT("Body"));
	BoneToModuleMap.Add(TEXT("Head"), TEXT("Body"));

	// Initial module states.
	ModuleStates.Add(TEXT("RightLeg"), EModuleStatus::Idle);
	ModuleStates.Add(TEXT("LeftLeg"), EModuleStatus::Idle);
	ModuleStates.Add(TEXT("RightArm"), EModuleStatus::Idle);
	ModuleStates.Add(TEXT("LeftArm"), EModuleStatus::Idle);
	ModuleStates.Add(TEXT("Body"), EModuleStatus::Idle);
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
		"WHERE AnimationData.SessionID = 5 "
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
				// Instead of storing a single MIDI note, add the note to an array for this frame.
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
			// For every bone in IdlePose, assign it to the module based on BoneToModuleMap.
			// This builds up a module-specific idle pose.
			for (const auto &Pair : IdlePose)
			{
				FName BoneName = Pair.Key;
				if (BoneToModuleMap.Contains(BoneName))
				{
					FString ModuleName = BoneToModuleMap[BoneName];
					// If the module's idle pose hasn't been created yet, add an empty map.
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
				// Debug: log what notes are present for this frame.
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
	UE_LOG(LogTemp, Warning, TEXT("Received MIDI note - Channel: %d, NoteID: %d, Velocity: %d, Timestamp: %.2f"),
		   Channel, NoteID, Velocity, Timestamp);

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
			TMap<FName, FTransform> ModulePose;
			for (const auto &Pair : RetrievedPose)
			{
				if (BoneToModuleMap.Contains(Pair.Key) && BoneToModuleMap[Pair.Key] == SelectedModule)
				{
					ModulePose.Add(Pair.Key, Pair.Value);
				}
			}

			// Update the target pose for the selected module.
			TargetModulePoses.Add(SelectedModule, ModulePose);

			// Get rule parameters for this module to adjust interpolation speed.
			FDrumModuleRule ModuleRule;
			if (ModuleRulesManager.GetModuleRule(SelectedModule, ModuleRule))
			{
				// Set interpolation duration based on velocity
				float NewInterpDuration = ModuleRule.GetInterpDuration(Velocity);
				UE_LOG(LogTemp, Log, TEXT("Module %s interpolation duration set to %.2f based on velocity %d"),
					   *SelectedModule, NewInterpDuration, Velocity);
			}

			// Mark module as "Moving"
			ModuleRulesManager.SetModuleStatus(SelectedModule, EModuleStatus::Moving);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to get animation frame data for frame %d"), SelectedFrameIndex);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No animation data found for MIDI note %d"), NoteID);
	}
}