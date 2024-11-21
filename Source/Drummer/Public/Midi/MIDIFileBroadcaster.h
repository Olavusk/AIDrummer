// MIDIFileBroadcaster.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MIDIFileBroadcaster.generated.h"

// Declare a multicast delegate for MIDI file events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMIDIFileNoteEvent, int32, Channel, int32, NoteID, int32, Velocity, float, Timestamp);

UCLASS()
class DRUMMER_API AMIDIFileBroadcaster : public AActor
{
	GENERATED_BODY()

public:
	// Constructor
	AMIDIFileBroadcaster();

	// Load and parse a MIDI file
	UFUNCTION(BlueprintCallable, Category = "MIDI File")
	bool LoadMIDIFile(const FString &FilePath);

	// Start playing the MIDI file
	UFUNCTION(BlueprintCallable, Category = "MIDI File")
	void PlayMIDIFile();

	// Stop playing the MIDI file
	UFUNCTION(BlueprintCallable, Category = "MIDI File")
	void StopMIDIFile();

	// Dispatcher for broadcasting MIDI file events
	UPROPERTY(BlueprintAssignable, Category = "MIDI File Events")
	FMIDIFileNoteEvent OnMIDIFileNoteEvent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Process the MIDI file playback
	void ProcessMIDIPlayback(float DeltaTime);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Helper function to simulate MIDI events
	void BroadcastMIDIEvent(int32 Channel, int32 NoteID, int32 Velocity, float Timestamp);

	// Holds the parsed MIDI data
	TArray<TTuple<float, int32, int32, int32>> MIDIEvents; // Tuple<Time, Channel, NoteID, Velocity>

	// Tracks the playback position
	float PlaybackTime;

	// Whether the MIDI file is currently playing
	bool bIsPlaying;

	// Index of the next event to process
	int32 CurrentEventIndex;
};