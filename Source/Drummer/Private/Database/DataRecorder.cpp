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

	// Initialize the database and start a new session
	InitializeDatabase();
	CreateNewSession();
}

void ADataRecorder::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// Unbind all dynamic events to avoid lingering connections
	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.RemoveDynamic(this, &ADataRecorder::OnMIDIEventReceived);
	}

	if (AnimationSource)
	{
		if (UMIDIDrummerAnimInstance *DrummerAnimInstance = Cast<UMIDIDrummerAnimInstance>(AnimationSource->GetAnimInstance()))
		{
			DrummerAnimInstance->OnMIDIBonePositionUpdated.RemoveDynamic(this, &ADataRecorder::OnBonePositionUpdated);
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

	bIsRecording = true;
	StartRecordingTime = GetWorld()->GetTimeSeconds();

	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.AddDynamic(this, &ADataRecorder::OnMIDIEventReceived);
	}

	if (AnimationSource)
	{
		if (UAnimInstance *AnimInstance = AnimationSource->GetAnimInstance())
		{
			UMIDIDrummerAnimInstance *DrummerAnimInstance = Cast<UMIDIDrummerAnimInstance>(AnimInstance);
			if (DrummerAnimInstance)
			{
				DrummerAnimInstance->OnMIDIBonePositionUpdated.AddDynamic(this, &ADataRecorder::OnBonePositionUpdated);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("DrummerAnimInstance is NULL."));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("AnimationSource does not have an AnimInstance."));
		}
	}
}

void ADataRecorder::StopRecording()
{
	if (!bIsRecording)
		return;

	bIsRecording = false;

	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.RemoveDynamic(this, &ADataRecorder::OnMIDIEventReceived);
	}

	if (AnimationSource)
	{
		if (UMIDIDrummerAnimInstance *DrummerAnimInstance = Cast<UMIDIDrummerAnimInstance>(AnimationSource->GetAnimInstance()))
		{
			DrummerAnimInstance->OnMIDIBonePositionUpdated.RemoveDynamic(this, &ADataRecorder::OnBonePositionUpdated);
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

	int32 FrameIndex = FMath::RoundToInt((GetWorld()->GetTimeSeconds() - StartRecordingTime) * 1000);
	FSQLitePreparedStatement Statement = Database.PrepareStatement(
		TEXT("INSERT INTO MIDIEvents (SessionID, FrameIndex, Channel, NoteID, Velocity, EventType) VALUES (?1, ?2, ?3, ?4, ?5, ?6);"));
	Statement.SetBindingValueByIndex(1, CurrentSessionID);
	Statement.SetBindingValueByIndex(2, FrameIndex);
	Statement.SetBindingValueByIndex(3, Channel);
	Statement.SetBindingValueByIndex(4, NoteID);
	Statement.SetBindingValueByIndex(5, Velocity);
	Statement.SetBindingValueByIndex(6, EventType);
	Statement.Execute();
}

void ADataRecorder::OnBonePositionUpdated(FName BoneName, FVector Position)
{
	if (!bIsRecording)
		return;

	int32 FrameIndex = FMath::RoundToInt((GetWorld()->GetTimeSeconds() - StartRecordingTime) * 1000);
	FSQLitePreparedStatement Statement = Database.PrepareStatement(
		TEXT("INSERT INTO AnimationData (SessionID, FrameIndex, BoneName, BonePosition_X, BonePosition_Y, BonePosition_Z) VALUES (?1, ?2, ?3, ?4, ?5, ?6);"));
	Statement.SetBindingValueByIndex(1, CurrentSessionID);
	Statement.SetBindingValueByIndex(2, FrameIndex);
	Statement.SetBindingValueByIndex(3, BoneName.ToString());
	Statement.SetBindingValueByIndex(4, Position.X);
	Statement.SetBindingValueByIndex(5, Position.Y);
	Statement.SetBindingValueByIndex(6, Position.Z);
	Statement.Execute();
}