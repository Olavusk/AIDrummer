#include "Database/DataRecorder.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/Paths.h"

ADataRecorder::ADataRecorder()
{
	PrimaryActorTick.bCanEverTick = true;
	bIsRecording = false; // Default to not recording
}

void ADataRecorder::BeginPlay()
{
	Super::BeginPlay();

	// Initialize the database and start a new session
	InitializeDatabase();
	CreateNewSession();

	// Listen for MIDI Events
	if (AMIDIEventBroadcaster *MIDIEventBroadcaster = Cast<AMIDIEventBroadcaster>(UGameplayStatics::GetActorOfClass(GetWorld(), AMIDIEventBroadcaster::StaticClass())))
	{
		MIDIEventBroadcaster->OnMIDINoteEvent.AddDynamic(this, &ADataRecorder::OnMIDIEventReceived);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to bind MIDIEventBroadcaster for OnMIDINoteEvent."));
	}

	// Listen for Bone Position Updates
	if (APawn *PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		if (USkeletalMeshComponent *Mesh = PlayerPawn->FindComponentByClass<USkeletalMeshComponent>())
		{
			if (UMIDIDrummerAnimInstance *DrummerAnimInstance = Cast<UMIDIDrummerAnimInstance>(Mesh->GetAnimInstance()))
			{
				DrummerAnimInstance->OnMIDIBonePositionUpdated.AddDynamic(this, &ADataRecorder::OnBonePositionUpdated);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("DrummerAnimInstance could not be cast from the pawn's skeletal mesh."));
			}
		}
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
	// Step 1: Insert a new row into the Sessions table
	FString Query = TEXT("INSERT INTO Sessions (StartTime) VALUES (datetime('now'));");

	if (!Database.Execute(*Query))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create new session."));
		return;
	}

	// Step 2: Retrieve the last inserted row ID using SELECT last_insert_rowid()
	FString LastInsertIDQuery = TEXT("SELECT last_insert_rowid();");

	Database.Execute(*LastInsertIDQuery, [this](const FSQLitePreparedStatement &Statement)
					 {
        // Temporary variable to hold the SessionID
        int32 RetrievedSessionID = -1;

        // Extract the first column as an integer
        if (Statement.GetColumnValueByIndex(0, RetrievedSessionID))
        {
            // Convert int32 to FString before assigning
            CurrentSessionID = FString::FromInt(RetrievedSessionID);
            
            // Correct log statement (dereference the FString)
            UE_LOG(LogTemp, Log, TEXT("New Session ID: %s"), *CurrentSessionID);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to retrieve Session ID from query."));
        }

        return ESQLitePreparedStatementExecuteRowResult::Stop; });
}

void ADataRecorder::StartRecording()
{
	UE_LOG(LogTemp, Log, TEXT("Recording started!"));
	bIsRecording = true;
}

void ADataRecorder::StopRecording()
{
	UE_LOG(LogTemp, Log, TEXT("Recording stopped!"));
	bIsRecording = false;
}

void ADataRecorder::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType)
{
	if (!bIsRecording)
		return;

	FString Query = FString::Printf(
		TEXT("INSERT INTO MIDIEvents (SessionID, Channel, NoteID, Velocity, EventType) VALUES ('%s', %d, %d, %d, '%s');"),
		*CurrentSessionID, Channel, NoteID, Velocity, *EventType);

	if (!Database.Execute(*Query))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to insert MIDI event data. Query: %s"), *Query);
	}
}

void ADataRecorder::OnBonePositionUpdated(FName BoneName, FVector Position)
{
	if (!bIsRecording)
		return;

	FString Query = FString::Printf(
		TEXT("INSERT INTO AnimationData (SessionID, BoneName, BonePosition_X, BonePosition_Y, BonePosition_Z) VALUES ('%s', '%s', %f, %f, %f);"),
		*CurrentSessionID, *BoneName.ToString(), Position.X, Position.Y, Position.Z);

	if (!Database.Execute(*Query))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to insert bone position data. Query: %s"), *Query);
	}
}

void ADataRecorder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}