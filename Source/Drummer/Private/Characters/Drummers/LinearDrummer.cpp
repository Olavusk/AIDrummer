#include "Characters/Drummers/LinearDrummer.h"
#include "Characters/Drummers/LinearDrummerAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/Paths.h"
#include "Engine/Engine.h" // For logging

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
		// Set our custom animation instance class.
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
	// You might add additional per-frame logic here.
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

	FString Query = TEXT(
		"SELECT FrameIndex, BoneName, LocalPos_X, LocalPos_Y, LocalPos_Z, "
		"LocalRot_X, LocalRot_Y, LocalRot_Z, LocalRot_W, "
		"LocalScale_X, LocalScale_Y, LocalScale_Z "
		"FROM AnimationData WHERE SessionID = 3 ORDER BY FrameIndex;");

	FSQLitePreparedStatement Statement;
	if (Statement.Create(Database, *Query))
	{
		while (Statement.Step() == ESQLitePreparedStatementStepResult::Row)
		{
			int32 FrameIndex;
			if (Statement.GetColumnValueByIndex(0, FrameIndex))
			{
				FString BoneNameStr;
				Statement.GetColumnValueByIndex(1, BoneNameStr);
				FName BoneName(*BoneNameStr);

				FVector Position;
				FQuat Rotation;
				FVector Scale;

				Statement.GetColumnValueByIndex(2, Position.X);
				Statement.GetColumnValueByIndex(3, Position.Y);
				Statement.GetColumnValueByIndex(4, Position.Z);

				Statement.GetColumnValueByIndex(5, Rotation.X);
				Statement.GetColumnValueByIndex(6, Rotation.Y);
				Statement.GetColumnValueByIndex(7, Rotation.Z);
				Statement.GetColumnValueByIndex(8, Rotation.W);

				Statement.GetColumnValueByIndex(9, Scale.X);
				Statement.GetColumnValueByIndex(10, Scale.Y);
				Statement.GetColumnValueByIndex(11, Scale.Z);

				FTransform BoneTransform(Rotation, Position, Scale);

				if (!AnimationFrames.Contains(FrameIndex))
				{
					AnimationFrames.Add(FrameIndex, TMap<FName, FTransform>());
				}
				AnimationFrames[FrameIndex].Add(BoneName, BoneTransform);
			}
		}

		UE_LOG(LogTemp, Log, TEXT("Loaded %d animation frames."), AnimationFrames.Num());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to prepare SQLite statement."));
	}
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

TArray<int32> ALinearDrummer::GetMatchingFrameIndicesForDrumHit(const FString &DrumHitType)
{
	TArray<int32> MatchingFrames;
	// Example dummy conditions:
	for (int32 FrameIndex : SortedFrameKeys)
	{
		if (DrumHitType.Equals(TEXT("Snare")))
		{
			// Example condition: choose even frame indices for Snare
			if (FrameIndex % 2 == 0)
			{
				MatchingFrames.Add(FrameIndex);
			}
		}
		else if (DrumHitType.Equals(TEXT("HiHat")))
		{
			// Example condition: choose odd frame indices for HiHat
			if (FrameIndex % 2 != 0)
			{
				MatchingFrames.Add(FrameIndex);
			}
		}
		else if (DrumHitType.Equals(TEXT("Crash")))
		{
			// Example condition: choose frames divisible by 3 for Crash
			if (FrameIndex % 3 == 0)
			{
				MatchingFrames.Add(FrameIndex);
			}
		}
		else
		{
			// Default: add all frames if type is unrecognized.
			MatchingFrames.Add(FrameIndex);
		}
	}
	return MatchingFrames;
}

void ALinearDrummer::OnMIDINoteReceived(int32 Channel, int32 NoteID, int32 Velocity, float Timestamp)
{
	// Log the MIDI note details received.
	UE_LOG(LogTemp, Warning, TEXT("LinearDrummer: Received MIDI note - Channel: %d, NoteID: %d, Velocity: %d, Timestamp: %.2f"),
		   Channel, NoteID, Velocity, Timestamp);

	// 1. Map the MIDI note to a drum hit type.
	FString DrumHitType;
	switch (NoteID)
	{
	case 38:
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
	UE_LOG(LogTemp, Warning, TEXT("LinearDrummer: Mapped MIDI note %d to drum hit type: %s"), NoteID, *DrumHitType);

	// 2. Look up a list of animation frames corresponding to this drum hit type.
	TArray<int32> MatchingFrames = GetMatchingFrameIndicesForDrumHit(DrumHitType);
	if (MatchingFrames.Num() > 0)
	{
		// Pick one randomly.
		int32 SelectedFrameIndex = MatchingFrames[FMath::RandRange(0, MatchingFrames.Num() - 1)];

		// 3. Set the target frame index.
		CurrentTargetFrameIndex = SelectedFrameIndex;
		UE_LOG(LogTemp, Log, TEXT("LinearDrummer: Set target frame to %d for drum hit type: %s"), SelectedFrameIndex, *DrumHitType);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("LinearDrummer: No animation data found for drum hit type %s"), *DrumHitType);
	}
}