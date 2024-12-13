// MIDIFileBroadcaster.cpp

#include "Midi/MIDIFileBroadcaster.h"
#include "Midi/MidiFile.h"
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
	// Clear previous data
	MIDIEvents.Empty();
	PlaybackTime = 0.0f;
	CurrentEventIndex = 0;

	// Convert Unreal FString to std::string
	std::string Path = TCHAR_TO_UTF8(*FilePath);

	// Create a MidiFile object and read the file
	smf::MidiFile midiFile;
	if (!midiFile.read(Path))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to read MIDI file: %s"), *FilePath);
		return false;
	}

	// Convert ticks to real-time seconds based on tempo
	midiFile.doTimeAnalysis();

	// Extract events
	for (int track = 0; track < midiFile.getTrackCount(); ++track)
	{
		for (int eventIndex = 0; eventIndex < midiFile[track].size(); ++eventIndex)
		{
			auto &midiEvent = midiFile[track][eventIndex];

			// Process Note-On events only
			if (midiEvent.isNoteOn())
			{
				float timestamp = midiEvent.seconds; // Time in seconds
				int channel = midiEvent.getChannel();
				int note = midiEvent.getKeyNumber();
				int velocity = midiEvent.getVelocity();

				// Add to the MIDIEvents array
				MIDIEvents.Add(MakeTuple(timestamp, channel, note, velocity));
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Loaded MIDI file with %d events."), MIDIEvents.Num());
	return true;
}

// Start playing the MIDI file
void AMIDIFileBroadcaster::PlayMIDIFile()
{
	if (MIDIEvents.Num() > 0)
	{
		bIsPlaying = true;
		PlaybackTime = 0.0f;
		CurrentEventIndex = 0;
		UE_LOG(LogTemp, Log, TEXT("Started MIDI file playback."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No MIDI events to play."));
	}
}

// Stop playing the MIDI file
void AMIDIFileBroadcaster::StopMIDIFile()
{
	bIsPlaying = false;
	UE_LOG(LogTemp, Log, TEXT("Stopped MIDI file playback."));
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
	// Increment playback time
	PlaybackTime += DeltaTime;

	// Process events in real-time
	while (CurrentEventIndex < MIDIEvents.Num())
	{
		const auto &Event = MIDIEvents[CurrentEventIndex];

		// Check if the event's timestamp is reached
		if (PlaybackTime >= Event.Get<0>()) // Event.Get<0>() is the timestamp
		{
			// Broadcast the event
			BroadcastMIDIEvent(Event.Get<1>(), Event.Get<2>(), Event.Get<3>(), Event.Get<0>());
			CurrentEventIndex++; // Move to the next event
		}
		else
		{
			break;
		}
	}

	// Stop playback if all events are processed
	if (CurrentEventIndex >= MIDIEvents.Num())
	{
		StopMIDIFile();
	}
}

// Helper function to broadcast MIDI events
void AMIDIFileBroadcaster::BroadcastMIDIEvent(int32 Channel, int32 NoteID, int32 Velocity, float Timestamp)
{
	// Trigger the note event
	OnMIDIFileNoteEvent.Broadcast(Channel, NoteID, Velocity, Timestamp);

	// Debug output
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue,
										 FString::Printf(TEXT("MIDI Event - Time: %.2f, Channel: %d, NoteID: %d, Velocity: %d"),
														 Timestamp, Channel, NoteID, Velocity));
	}

	UE_LOG(LogTemp, Warning, TEXT("MIDI Event - Time: %.2f, Channel: %d, NoteID: %d, Velocity: %d"),
		   Timestamp, Channel, NoteID, Velocity);
}