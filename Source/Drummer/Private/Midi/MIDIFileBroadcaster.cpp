// MIDIFileBroadcaster.cpp

#include "Midi/MIDIFileBroadcaster.h"

// Constructor
AMIDIFileBroadcaster::AMIDIFileBroadcaster()
{
	PrimaryActorTick.bCanEverTick = true;
	PlaybackTime = 0.0f;
	bIsPlaying = false;
	CurrentEventIndex = 0;
}

// Called when the game starts or when spawned
void AMIDIFileBroadcaster::BeginPlay()
{
	Super::BeginPlay();
}

// Load and parse a MIDI file
bool AMIDIFileBroadcaster::LoadMIDIFile(const FString &FilePath)
{
	// Reset playback data
	MIDIEvents.Empty();
	PlaybackTime = 0.0f;
	CurrentEventIndex = 0;

	// Use a MIDI file parser to load and process the file (this part depends on the library you use)
	// For simplicity, we simulate MIDI events here.
	// Replace this code with actual MIDI file parsing.
	MIDIEvents.Add(MakeTuple(0.1f, 1, 60, 100)); // Example: Time=0.1s, Channel=1, NoteID=60, Velocity=100
	MIDIEvents.Add(MakeTuple(0.5f, 1, 62, 100));
	MIDIEvents.Add(MakeTuple(1.0f, 1, 64, 100));

	// Return true if successful
	return true;
}

// Start playing the MIDI file
void AMIDIFileBroadcaster::PlayMIDIFile()
{
	bIsPlaying = true;
	PlaybackTime = 0.0f;
	CurrentEventIndex = 0;
}

// Stop playing the MIDI file
void AMIDIFileBroadcaster::StopMIDIFile()
{
	bIsPlaying = false;
}

// Called every frame
void AMIDIFileBroadcaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsPlaying)
	{
		ProcessMIDIPlayback(DeltaTime);
	}
}

// Process the MIDI file playback
void AMIDIFileBroadcaster::ProcessMIDIPlayback(float DeltaTime)
{
	PlaybackTime += DeltaTime;

	while (CurrentEventIndex < MIDIEvents.Num())
	{
		const auto &Event = MIDIEvents[CurrentEventIndex];

		// Check if the event's timestamp is reached
		if (PlaybackTime >= Event.Get<0>())
		{
			// Broadcast the event
			BroadcastMIDIEvent(Event.Get<1>(), Event.Get<2>(), Event.Get<3>(), Event.Get<0>());
			CurrentEventIndex++;
		}
		else
		{
			break;
		}
	}

	// Stop playing if all events are processed
	if (CurrentEventIndex >= MIDIEvents.Num())
	{
		bIsPlaying = false;
	}
}

// Helper function to broadcast MIDI events
void AMIDIFileBroadcaster::BroadcastMIDIEvent(int32 Channel, int32 NoteID, int32 Velocity, float Timestamp)
{
	OnMIDIFileNoteEvent.Broadcast(Channel, NoteID, Velocity, Timestamp);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue,
										 FString::Printf(TEXT("MIDI Event - Time: %.2f, Channel: %d, NoteID: %d, Velocity: %d"),
														 Timestamp, Channel, NoteID, Velocity));
	}

	UE_LOG(LogTemp, Warning, TEXT("MIDI Event - Time: %.2f, Channel: %d, NoteID: %d, Velocity: %d"),
		   Timestamp, Channel, NoteID, Velocity);
}