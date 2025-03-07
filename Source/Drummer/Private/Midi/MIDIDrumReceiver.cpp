// Fill out your copyright notice in the Description page of Project Settings.
#include "Midi/MIDIDrumReceiver.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

// Sets default values
AMIDIDrumReceiver::AMIDIDrumReceiver()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AMIDIDrumReceiver::BeginPlay()
{
	Super::BeginPlay();
	// Bind to MIDIEventBroadcaster (controller) if available
	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.AddDynamic(this, &AMIDIDrumReceiver::OnMIDIEventReceived);
	}
	// Bind to MIDIFileBroadcaster (file) using the wrapper
	if (MIDIFileBroadcaster)
	{
		MIDIFileBroadcaster->OnMIDIFileNoteEvent.AddDynamic(this, &AMIDIDrumReceiver::OnMIDIFileEventReceivedWrapper);
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
									 FString::Printf(TEXT("HELO")));
}

void AMIDIDrumReceiver::OnMIDIFileEventReceivedWrapper(int32 Channel, int32 NoteID, int32 Velocity, float Timestamp)
{
	// Convert the float Timestamp to a string representation
	FString EventType = FString::SanitizeFloat(Timestamp);
	// Call the common handler
	OnMIDIEventReceived(Channel, NoteID, Velocity, EventType);
}

void AMIDIDrumReceiver::PlayDrumSound(USoundBase *DrumSound, int32 Velocity)
{
	if (DrumSound)
	{
		// Spawn the sound and apply velocity as a parameter
		UAudioComponent *AudioComponent = UGameplayStatics::SpawnSoundAtLocation(this, DrumSound, GetActorLocation());
		if (AudioComponent)
		{
			TArray<FAudioParameter> AudioParameters;
			AudioParameters.Add(FAudioParameter(TEXT("Velocity"), static_cast<float>(Velocity) / 127.0f));
		}
	}
}

void AMIDIDrumReceiver::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType)
{
	bool bShouldProcess = false;
	float ProcessedTimestamp = 0.0f;

	// Check if EventType is numeric (file event) or "Note On" (controller)
	if (EventType.IsNumeric())
	{
		bShouldProcess = (Velocity > 0);
		ProcessedTimestamp = FCString::Atof(*EventType);
	}
	else if (EventType == "Note On")
	{
		bShouldProcess = (Velocity > 0);
		ProcessedTimestamp = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
	}

	if (bShouldProcess)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
											 FString::Printf(TEXT("Channel: %d, NoteID: %d, Velocity: %d, Timestamp: %.2f"),
															 Channel, NoteID, Velocity, ProcessedTimestamp));
		}

		// Process drum sounds based on NoteID
		switch (NoteID)
		{
		case 35: // Acoustic Bass Drum
		case 36: // Kick Drum
			PlayDrumSound(KickSound, Velocity);
			break;
		case 37: // Side Stick
		case 38: // Snare Drum
		case 40:
			PlayDrumSound(SnareSound, Velocity);
			break;
		case 42: // Closed Hi-Hat
			PlayDrumSound(HiHatClosedSound, Velocity);
			break;
		case 46: // Open Hi-Hat
			PlayDrumSound(HiHatOpenSound, Velocity);
			break;
		case 41: // Low Floor Tom
		case 43: // Low Tom
			PlayDrumSound(TomLowSound, Velocity);
			break;
		case 45: // Mid Tom
			PlayDrumSound(TomMidSound, Velocity);
			break;
		case 48: // High Tom
			PlayDrumSound(TomHighSound, Velocity);
			break;
		case 55: // Crash Cymbal 1
		case 52:
		case 57: // Crash Cymbal 2
			PlayDrumSound(CrashCymbalSound, Velocity);
			break;
		case 51: // Ride Cymbal 1
		case 59: // Ride Cymbal 2
			PlayDrumSound(RideCymbalSound, Velocity);
			break;
		default:
			// Unhandled note
			break;
		}
	}
}