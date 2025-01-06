#include "Database/DataRecorder.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/Paths.h"

ADataRecorder::ADataRecorder()
{
	PrimaryActorTick.bCanEverTick = true;
	bIsRecording = false;	   // Default to not recording
	StartRecordingTime = 0.0f; // Initialize start time
}

void ADataRecorder::BeginPlay()
{
	Super::BeginPlay();
}

void ADataRecorder::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.RemoveDynamic(this, &ADataRecorder::OnMIDIEventReceived);
	}

	if (AnimationSourceActor)
	{
		USkeletalMeshComponent *SkeletalMesh = AnimationSourceActor->FindComponentByClass<USkeletalMeshComponent>();
		if (SkeletalMesh)
		{
			if (ULiveDrummerAnimInstance *LiveAnimInstance = Cast<ULiveDrummerAnimInstance>(SkeletalMesh->GetAnimInstance()))
			{
				LiveAnimInstance->OnLiveBonePositionUpdated.RemoveDynamic(this, &ADataRecorder::OnBonePositionUpdated);
			}
		}
	}

	if (Database.IsValid())
	{
		UE_LOG(LogTemp, Log, TEXT("Closing SQLite database connection in EndPlay."));
		Database.Close();
	}
}

void ADataRecorder::InitializeDatabase()
{
	FString DatabasePath = FPaths::ProjectContentDir() + TEXT("Database/drummer_data.db");

	if (!Database.Open(*DatabasePath, ESQLiteDatabaseOpenMode::ReadWriteCreate))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to open SQLite database at path: %s"), *DatabasePath);
	}
}

void ADataRecorder::CreateNewSession()
{
	FSQLitePreparedStatement Statement = Database.PrepareStatement(TEXT("INSERT INTO Sessions (StartTime) VALUES (datetime('now'));"));
	Statement.Execute();

	FSQLitePreparedStatement Query = Database.PrepareStatement(TEXT("SELECT last_insert_rowid();"));
	if (Query.Execute() && Query.Step() == ESQLitePreparedStatementStepResult::Row)
	{
		Query.GetColumnValueByIndex(0, CurrentSessionID);
	}
}

void ADataRecorder::StartRecording()
{
	if (bIsRecording)
		return;

	InitializeDatabase();
	CreateNewSession();

	bIsRecording = true;
	StartRecordingTime = GetWorld()->GetTimeSeconds();

	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.AddDynamic(this, &ADataRecorder::OnMIDIEventReceived);
	}

	if (AnimationSourceActor)
	{
		USkeletalMeshComponent *SkeletalMesh = AnimationSourceActor->FindComponentByClass<USkeletalMeshComponent>();
		if (SkeletalMesh)
		{
			if (ULiveDrummerAnimInstance *LiveAnimInstance = Cast<ULiveDrummerAnimInstance>(SkeletalMesh->GetAnimInstance()))
			{
				LiveAnimInstance->OnLiveBonePositionUpdated.AddDynamic(this, &ADataRecorder::OnBonePositionUpdated);
			}
		}
	}
}

void ADataRecorder::StopRecording()
{
	if (!bIsRecording)
		return;

	bIsRecording = false;

	FSQLitePreparedStatement Statement = Database.PrepareStatement(TEXT("UPDATE Sessions SET EndTime = datetime('now') WHERE SessionID = ?1;"));

	if (Statement.IsValid())
	{
		Statement.SetBindingValueByIndex(1, CurrentSessionID);
		if (!Statement.Execute())
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to update end time for SessionID: %s"), *CurrentSessionID);
		}
	}

	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.RemoveDynamic(this, &ADataRecorder::OnMIDIEventReceived);
	}

	if (AnimationSourceActor)
	{
		USkeletalMeshComponent *SkeletalMesh = AnimationSourceActor->FindComponentByClass<USkeletalMeshComponent>();
		if (SkeletalMesh)
		{
			if (ULiveDrummerAnimInstance *LiveAnimInstance = Cast<ULiveDrummerAnimInstance>(SkeletalMesh->GetAnimInstance()))
			{
				LiveAnimInstance->OnLiveBonePositionUpdated.RemoveDynamic(this, &ADataRecorder::OnBonePositionUpdated);
			}
		}
	}

	if (Database.IsValid())
	{
		UE_LOG(LogTemp, Log, TEXT("Closing SQLite database connection in StopRecording."));
		Database.Close();
	}
}

void ADataRecorder::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType)
{
	if (!bIsRecording)
		return;
}

void ADataRecorder::OnBonePositionUpdated(FName BoneName, FVector Position)
{
	if (!bIsRecording)
		return;

	int32 FrameIndex = FMath::RoundToInt((GetWorld()->GetTimeSeconds() - StartRecordingTime) * 1000);
	FSQLitePreparedStatement Statement = Database.PrepareStatement(
		TEXT("INSERT INTO AnimationData (SessionID, FrameIndex, BoneName, BonePosition_X, BonePosition_Y, BonePosition_Z) VALUES (?1, ?2, ?3, ?4, ?5, ?6);"));

	if (Statement.IsValid())
	{
		Statement.SetBindingValueByIndex(1, CurrentSessionID);
		Statement.SetBindingValueByIndex(2, FrameIndex);
		Statement.SetBindingValueByIndex(3, BoneName.ToString());
		Statement.SetBindingValueByIndex(4, Position.X);
		Statement.SetBindingValueByIndex(5, Position.Y);
		Statement.SetBindingValueByIndex(6, Position.Z);
		Statement.Execute();
	}
}