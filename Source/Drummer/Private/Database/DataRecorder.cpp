#include "Database/DataRecorder.h"
#include "Kismet/GameplayStatics.h"
#include "Characters/Drummers/LiveDrummerAnimInstance.h"
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
		MetronomeCount = 0;
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
				LiveAnimInstance->OnLiveBoneTransformUpdated.AddDynamic(
					this,
					&ADataRecorder::OnBoneTransformUpdated);
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
	// Prepare an INSERT that includes the BPM column
	FSQLitePreparedStatement Statement = Database.PrepareStatement(
		TEXT("INSERT INTO Sessions (StartTime, BPM) VALUES (datetime('now'), ?1);"));

	// Bind the BPM value.  If your BPM is a float, you can insert as numeric.
	// The column type in your table is INTEGER, which is fine for typical BPM values,
	// but if you want to allow decimal BPM, you can store it as REAL instead.
	Statement.SetBindingValueByIndex(1, BPM);

	// Execute the statement
	if (!Statement.Execute())
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create new session with BPM."));
		return;
	}

	// Retrieve the newly created SessionID
	FSQLitePreparedStatement Query = Database.PrepareStatement(TEXT("SELECT last_insert_rowid();"));
	if (Query.Execute() && Query.Step() == ESQLitePreparedStatementStepResult::Row)
	{
		Query.GetColumnValueByIndex(0, CurrentSessionID);
		UE_LOG(LogTemp, Log, TEXT("New session created. SessionID = %s, BPM = %f"), *CurrentSessionID, BPM);
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
				LiveAnimInstance->OnLiveBoneTransformUpdated.AddDynamic(
					this,
					&ADataRecorder::OnBoneTransformUpdated);
			}
		}
	}
}

void ADataRecorder::StopRecording()
{
	if (!bIsRecording)
		return;

	bIsRecording = false;

	// --- Flush leftover MIDI events
	TFuture<void> AnimFlush = FlushAnimationDataBufferAsync();
	TFuture<void> MIDIFlush = FlushMIDIEventsBufferAsync();

	// Wait for them to finish
	AnimFlush.Wait();
	MIDIFlush.Wait();

	// Update end time
	FSQLitePreparedStatement Statement = Database.PrepareStatement(TEXT("UPDATE Sessions SET EndTime = datetime('now') WHERE SessionID = ?1;"));
	if (Statement.IsValid())
	{
		Statement.SetBindingValueByIndex(1, CurrentSessionID);
		if (!Statement.Execute())
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to update end time for SessionID: %s"), *CurrentSessionID);
		}
	}

	// Remove delegates, etc.
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
				LiveAnimInstance->OnLiveBoneTransformUpdated.RemoveDynamic(this, &ADataRecorder::OnBoneTransformUpdated);
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
	{
		return;
	}

	// Calculate FrameIndex similarly to animation data
	int32 FrameIndex = FMath::RoundToInt((GetWorld()->GetTimeSeconds() - StartRecordingTime) * 1000);

	// Prepare the values for a single row (SessionID, FrameIndex, Channel, NoteID, Velocity, EventType)
	FString Row = FString::Printf(
		TEXT("(%s, %d, %d, %d, %d, '%s')"),
		*CurrentSessionID,
		FrameIndex,
		Channel,
		NoteID,
		Velocity,
		*EventType);

	// Add to the MIDIEvents buffer
	MIDIEventsBuffer.Add(Row);

	// If our buffer exceeds a threshold, flush to the DB
	if (MIDIEventsBuffer.Num() >= MaxMIDIBatchSize)
	{
		FlushMIDIEventsBuffer();
	}
}

void ADataRecorder::FlushMIDIEventsBuffer()
{
	if (MIDIEventsBuffer.Num() == 0)
	{
		return; // Nothing to flush
	}

	// Build one big INSERT statement
	FString SQLQuery = TEXT("INSERT INTO MIDIEvents (SessionID, FrameIndex, Channel, NoteID, Velocity, EventType) VALUES ");
	SQLQuery += FString::Join(MIDIEventsBuffer, TEXT(", ")) + TEXT(";");

	// Execute on a background thread
	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [SQLQuery, this]()
			  {
        FSQLitePreparedStatement Statement = Database.PrepareStatement(*SQLQuery);
        if (!Statement.IsValid() || !Statement.Execute())
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to execute batched MIDI events insert."));
        } });

	// Clear the buffer after scheduling the insert
	MIDIEventsBuffer.Empty();
}

TFuture<void> ADataRecorder::FlushMIDIEventsBufferAsync()
{
	if (MIDIEventsBuffer.Num() == 0)
	{
		// Return an already-finished future
		return Async(EAsyncExecution::Thread, []() {});
	}

	// Build one big INSERT statement
	FString SQLQuery = TEXT("INSERT INTO MIDIEvents (SessionID, FrameIndex, Channel, NoteID, Velocity, EventType) VALUES ");
	SQLQuery += FString::Join(MIDIEventsBuffer, TEXT(", ")) + TEXT(";");

	// Clear the buffer *before* spawning the async task
	MIDIEventsBuffer.Empty();

	// Launch the insert asynchronously and return a TFuture
	return Async(EAsyncExecution::Thread, [SQLQuery, this]()
				 {
        FSQLitePreparedStatement Statement = Database.PrepareStatement(*SQLQuery);
        if (!Statement.IsValid() || !Statement.Execute())
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to execute batched MIDI events insert (Async)."));
        } });
}

void ADataRecorder::OnBoneTransformUpdated(FName BoneName, FVector LocalPosition, FQuat LocalRotation, FVector LocalScale)
{
	if (!bIsRecording)
		return;

	int32 FrameIndex = FMath::RoundToInt((GetWorld()->GetTimeSeconds() - StartRecordingTime) * 1000);

	FString Row = FString::Printf(
		TEXT("(%s, %d, '%s', %f, %f, %f, %f, %f, %f, %f, %f, %f, %f)"),
		*CurrentSessionID,
		FrameIndex,
		*BoneName.ToString(),
		LocalPosition.X,
		LocalPosition.Y,
		LocalPosition.Z,
		LocalRotation.X,
		LocalRotation.Y,
		LocalRotation.Z,
		LocalRotation.W,
		LocalScale.X,
		LocalScale.Y,
		LocalScale.Z);

	AnimationDataBuffer.Add(Row);

	if (AnimationDataBuffer.Num() >= MaxBatchSize)
	{
		FlushAnimationDataBuffer();
	}
}

void ADataRecorder::FlushAnimationDataBuffer()
{
	if (AnimationDataBuffer.Num() == 0)
		return;

	FString SQLQuery = TEXT("INSERT INTO AnimationData ")
						   TEXT("(SessionID, FrameIndex, BoneName, LocalPos_X, LocalPos_Y, LocalPos_Z, ")
							   TEXT(" LocalRot_X, LocalRot_Y, LocalRot_Z, LocalRot_W, ")
								   TEXT(" LocalScale_X, LocalScale_Y, LocalScale_Z) VALUES ") +
					   FString::Join(AnimationDataBuffer, TEXT(", ")) + TEXT(";");

	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [SQLQuery, this]()
			  {
        FSQLitePreparedStatement Statement = Database.PrepareStatement(*SQLQuery);
        if (!Statement.IsValid() || !Statement.Execute())
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to execute batched animation data insert."));
        } });

	AnimationDataBuffer.Empty();
}

TFuture<void> ADataRecorder::FlushAnimationDataBufferAsync()
{
	if (AnimationDataBuffer.Num() == 0)
	{
		// Return an already-finished future
		return Async(EAsyncExecution::Thread, []() {});
	}

	FString SQLQuery = TEXT("INSERT INTO AnimationData (SessionID, FrameIndex, BoneName, BonePosition_X, BonePosition_Y, BonePosition_Z) VALUES ") + FString::Join(AnimationDataBuffer, TEXT(", ")) + TEXT(";");

	AnimationDataBuffer.Empty();

	// Launch the insert asynchronously and return a TFuture
	return Async(EAsyncExecution::Thread, [SQLQuery, this]()
				 {
        FSQLitePreparedStatement Statement = Database.PrepareStatement(*SQLQuery);
        if (!Statement.IsValid() || !Statement.Execute())
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to execute batched animation data insert (Async)."));
        } });
}