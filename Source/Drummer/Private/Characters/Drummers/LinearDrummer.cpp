#include "Characters/Drummers/LinearDrummer.h"
#include "Characters/Drummers/LinearDrummerAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/Paths.h"
#include "Engine/Engine.h"

ALinearDrummer::ALinearDrummer()
{
	PrimaryActorTick.bCanEverTick = true;
	DatabasePath = FPaths::ProjectContentDir() + TEXT("Database/drummer_data.db");
	bDatabaseOpen = false;
	CurrentTargetFrameIndex = 0;
}

void ALinearDrummer::BeginPlay()
{
	Super::BeginPlay();

	if (GetMesh())
	{
		// Set the custom animation instance class.
		GetMesh()->SetAnimInstanceClass(ULinearDrummerAnimInstance::StaticClass());
		GetMesh()->bEnableUpdateRateOptimizations = false;

		// Load animation data from the database.
		LoadAnimationFromDatabase();

		// Sort the frame keys.
		SortedFrameKeys.Empty();
		AnimationFrames.GetKeys(SortedFrameKeys);
		SortedFrameKeys.Sort();

		UE_LOG(LogTemp, Log, TEXT("LinearDrummer: Loaded %d animation frames."), AnimationFrames.Num());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Skeletal mesh is null in ALinearDrummer::BeginPlay."));
	}

	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDIFileNoteEvent.AddDynamic(this, &ALinearDrummer::OnMIDINoteReceived);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Turquoise, TEXT("Bound to MIDIBroadcaster!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("MIDIBroadcaster is not assigned in MIDIDrummer."));
	}
}

void ALinearDrummer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALinearDrummer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (Database.IsValid())
	{
		Database.Close();
		bDatabaseOpen = false;
		UE_LOG(LogTemp, Log, TEXT("Closed SQLite database connection in EndPlay."));
	}
}

void ALinearDrummer::LoadAnimationFromDatabase()
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
	// Every MIDI event row now returns the corresponding animation data.
	FString Query = TEXT(
		"SELECT MIDIEvents.NoteID, AnimationData.FrameIndex, BoneName, "
		"LocalPos_X, LocalPos_Y, LocalPos_Z, "
		"LocalRot_X, LocalRot_Y, LocalRot_Z, LocalRot_W, "
		"LocalScale_X, LocalScale_Y, LocalScale_Z "
		"FROM AnimationData "
		"INNER JOIN MIDIEvents ON MIDIEvents.SessionID = AnimationData.SessionID "
		"AND MIDIEvents.FrameIndex = AnimationData.FrameIndex "
		"WHERE AnimationData.SessionID = 3 "
		"ORDER BY AnimationData.FrameIndex;");

	FSQLitePreparedStatement Statement;
	if (Statement.Create(Database, *Query))
	{
		while (Statement.Step() == ESQLitePreparedStatementStepResult::Row)
		{
			// Optionally retrieve the MIDI note from the first column (not used here)
			int32 MidiNote;
			Statement.GetColumnValueByIndex(0, MidiNote);

			int32 FrameIndex;
			if (Statement.GetColumnValueByIndex(1, FrameIndex))
			{
				if (!FrameIndexToMidiNote.Contains(FrameIndex))
				{
					FrameIndexToMidiNote.Add(FrameIndex, MidiNote);
				}
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

TArray<int32> ALinearDrummer::GetMatchingFrameIndicesForMidiNote(int32 MidiNote)
{
	TArray<int32> MatchingFrames;
	for (int32 FrameIndex : SortedFrameKeys)
	{
		if (FrameIndexToMidiNote.Contains(FrameIndex) && FrameIndexToMidiNote[FrameIndex] == MidiNote)
		{
			MatchingFrames.Add(FrameIndex);
		}
	}
	return MatchingFrames;
}

bool ALinearDrummer::GetAnimationFrameData(int32 FrameIndex, TMap<FName, FTransform> &OutBoneData) const
{
	if (AnimationFrames.Contains(FrameIndex))
	{
		OutBoneData = AnimationFrames.FindChecked(FrameIndex);
		return true;
	}
	return false;
}

void ALinearDrummer::OnMIDINoteReceived(int32 Channel, int32 NoteID, int32 Velocity, float Timestamp)
{
	UE_LOG(LogTemp, Warning, TEXT("Received MIDI note - Channel: %d, NoteID: %d, Velocity: %d, Timestamp: %.2f"),
		   Channel, NoteID, Velocity, Timestamp);

	FString DrumHitType;
	switch (NoteID)
	{
	case 36:
		DrumHitType = TEXT("Kick");
		break;
	case 37:
		DrumHitType = TEXT("Snare");
		break;
	case 42:
		DrumHitType = TEXT("HiHat");
		break;
	case 49:
		DrumHitType = TEXT("Crash");
		break;
	default:
		DrumHitType = TEXT("Default");
		break;
	}
	UE_LOG(LogTemp, Warning, TEXT("Mapped MIDI note %d to drum hit type: %s"), NoteID, *DrumHitType);

	// Use the NoteID directly to get matching frames.
	TArray<int32> MatchingFrames = GetMatchingFrameIndicesForMidiNote(NoteID);
	if (MatchingFrames.Num() > 0)
	{
		int32 SelectedFrameIndex = MatchingFrames[FMath::RandRange(0, MatchingFrames.Num() - 1)];
		CurrentTargetFrameIndex = SelectedFrameIndex;
		UE_LOG(LogTemp, Log, TEXT("Set target frame to %d for MIDI note %d"), SelectedFrameIndex, NoteID);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No animation data found for MIDI note %d"), NoteID);
	}
}