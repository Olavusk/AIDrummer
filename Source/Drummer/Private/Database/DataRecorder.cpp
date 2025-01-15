#include "Database/DataRecorder.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/Paths.h"

ADataRecorder::ADataRecorder()
{
	PrimaryActorTick.bCanEverTick = true;
	bIsRecording = false;	   // Default to not recording
	StartRecordingTime = 0.0f; // Initialize start time
	BPM = 120.0f;
}

void ADataRecorder::BeginPlay()
{
	Super::BeginPlay();
}

void ADataRecorder::StartMetronome()
{
	if (BPM <= 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid BPM value. Cannot start metronome."));
		return;
	}

	float Interval = 60.0f / BPM; // Calculate tick interval based on BPM
	GetWorld()->GetTimerManager().SetTimer(MetronomeTimerHandle, this, &ADataRecorder::MetronomeTick, Interval, true);

	UE_LOG(LogTemp, Log, TEXT("Metronome started with BPM: %f"), BPM);
}

void ADataRecorder::StopMetronome()
{
	GetWorld()->GetTimerManager().ClearTimer(MetronomeTimerHandle);
	UE_LOG(LogTemp, Log, TEXT("Metronome stopped."));
}

void ADataRecorder::MetronomeTick()
{
	static int32 MetronomeCount = 0; // Track the current beat count
	MetronomeCount++;				 // Increment beat count

	// Play the metronome tick sound
	if (MetronomeSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, MetronomeSound, GetActorLocation());
	}
	UE_LOG(LogTemp, Log, TEXT("Metronome tick: Beat %d"), MetronomeCount);

	// Handle countdown and recording transitions
	if (!bIsRecording && MetronomeCount == 4)
	{
		StartRecording(); // Start recording after 4 beats
		UE_LOG(LogTemp, Log, TEXT("Recording started."));
	}
	else if (bIsRecording && MetronomeCount == 12)
	{
		StopRecording();												// Stop recording after 12 beats (4 countdown + 8 recording)
		GetWorld()->GetTimerManager().ClearTimer(MetronomeTimerHandle); // Stop the metronome
		UE_LOG(LogTemp, Log, TEXT("Recording stopped."));
	}
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

// Add a buffer to hold batched animation data
TArray<FString> AnimationDataBuffer;
const int32 MaxBatchSize = 100; // Adjust based on performance needs

void ADataRecorder::OnBonePositionUpdated(FName BoneName, FVector Position)
{
	if (!bIsRecording)
		return;

	int32 FrameIndex = FMath::RoundToInt((GetWorld()->GetTimeSeconds() - StartRecordingTime) * 1000);

	// Prepare the data as a single SQL string
	FString BoneNameString = BoneName.ToString();

	FString Row = FString::Printf(
		TEXT("(%s, %d, '%s', %f, %f, %f)"),
		*CurrentSessionID, // Must dereference FString
		FrameIndex,
		*BoneNameString, // Must dereference FString
		Position.X,
		Position.Y,
		Position.Z);

	AnimationDataBuffer.Add(Row);

	// Flush the buffer if it reaches the max batch size
	if (AnimationDataBuffer.Num() >= MaxBatchSize)
	{
		FlushAnimationDataBuffer();
	}
}

void ADataRecorder::FlushAnimationDataBuffer()
{
	if (AnimationDataBuffer.Num() == 0)
		return;

	FString SQLQuery = TEXT("INSERT INTO AnimationData (SessionID, FrameIndex, BoneName, BonePosition_X, BonePosition_Y, BonePosition_Z) VALUES ");
	SQLQuery += FString::Join(AnimationDataBuffer, TEXT(", ")) + TEXT(";");

	// Run the insert on a background thread
	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [SQLQuery, this]()
			  {
        FSQLitePreparedStatement Statement = Database.PrepareStatement(*SQLQuery);
        if (!Statement.IsValid() || !Statement.Execute())
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to execute batched animation data insert."));
        } });

	AnimationDataBuffer.Empty(); // Clear the buffer after scheduling the task
}