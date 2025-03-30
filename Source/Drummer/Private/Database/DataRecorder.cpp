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
	BeatsToRecord = 32;
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
	static int32 MetronomeCount = 0;
	MetronomeCount++;

	// Play the metronome tick sound
	if (MetronomeSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, MetronomeSound, GetActorLocation());
	}
	UE_LOG(LogTemp, Log, TEXT("Metronome tick: Beat %d"), MetronomeCount);

	if (!bIsRecording && MetronomeCount == 4)
	{
		// Start recording after 4 "count-in" beats
		StartRecording();
		UE_LOG(LogTemp, Log, TEXT("Recording started."));
	}
	else if (bIsRecording)
	{
		// (4 + BeatsToRecord) total beats means we've done our count-in + recorded beats
		int32 TotalBeatsNeeded = 4 + BeatsToRecord;

		if (MetronomeCount >= TotalBeatsNeeded)
		{
			StopRecording();
			GetWorld()->GetTimerManager().ClearTimer(MetronomeTimerHandle);
			MetronomeCount = 0;
			UE_LOG(LogTemp, Log, TEXT("Recording stopped."));
		}
	}
}

void ADataRecorder::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	GetWorld()->GetTimerManager().ClearTimer(AnimationTimerHandle);

	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.RemoveDynamic(this, &ADataRecorder::OnMIDIEventReceived);
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
	// Prepare an INSERT that includes BPM and NumBeats
	FSQLitePreparedStatement Statement = Database.PrepareStatement(
		TEXT("INSERT INTO Sessions (StartTime, BPM, NumBeats) VALUES (datetime('now'), ?1, ?2);"));
	Statement.SetBindingValueByIndex(1, BPM);
	Statement.SetBindingValueByIndex(2, BeatsToRecord);

	// Execute the statement
	if (!Statement.Execute())
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create new session with BPM and BeatsToRecord."));
		return;
	}

	// Retrieve the newly created SessionID
	FSQLitePreparedStatement Query = Database.PrepareStatement(TEXT("SELECT last_insert_rowid();"));
	if (Query.Execute() && Query.Step() == ESQLitePreparedStatementStepResult::Row)
	{
		Query.GetColumnValueByIndex(0, CurrentSessionID);
		UE_LOG(LogTemp, Log, TEXT("New session created. SessionID = %s, BPM = %f, BeatsToRecord = %d"),
			   *CurrentSessionID, BPM, BeatsToRecord);
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
		GetWorld()->GetTimerManager().SetTimer(AnimationTimerHandle, this, &ADataRecorder::RecordAnimationFrame, 1.0f / 60.0f, true);
	}
}

void ADataRecorder::StopRecording()
{
	if (!bIsRecording)
		return;

	bIsRecording = false;

	GetWorld()->GetTimerManager().ClearTimer(AnimationTimerHandle);

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
	FString SQLQuery = TEXT("INSERT INTO AnimationData ")
						   TEXT("(SessionID, FrameIndex, BoneName, LocalPos_X, LocalPos_Y, LocalPos_Z, ")
							   TEXT(" LocalRot_X, LocalRot_Y, LocalRot_Z, LocalRot_W, ")
								   TEXT(" LocalScale_X, LocalScale_Y, LocalScale_Z) VALUES ") +
					   FString::Join(AnimationDataBuffer, TEXT(", ")) + TEXT(";");

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

void ADataRecorder::RecordAnimationFrame()
{
	if (!bIsRecording)
		return;

	if (AnimationSourceActor)
	{
		USkeletalMeshComponent *SkeletalMesh = AnimationSourceActor->FindComponentByClass<USkeletalMeshComponent>();
		if (SkeletalMesh)
		{
			int32 NumBones = SkeletalMesh->GetNumBones();
			// Calculate a frame index (for example, in milliseconds)
			int32 FrameIndex = FMath::RoundToInt((GetWorld()->GetTimeSeconds() - StartRecordingTime) * 1000);

			// Loop through all bones
			for (int32 i = 0; i < NumBones; ++i)
			{
				FName BoneName = SkeletalMesh->GetBoneName(i);
				FTransform BoneTransform = SkeletalMesh->GetBoneTransform(i);
				FVector LocalPosition = BoneTransform.GetLocation();
				FQuat LocalRotation = BoneTransform.GetRotation();
				FVector LocalScale = BoneTransform.GetScale3D();

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
			}

			// Flush the buffer if we've reached the batch size
			if (AnimationDataBuffer.Num() >= MaxBatchSize)
			{
				FlushAnimationDataBuffer();
			}
		}
	}
}