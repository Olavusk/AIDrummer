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
	// Ensure we have a valid broadcaster and bind to it
	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.AddDynamic(this, &AMIDIDrumReceiver::OnMIDIEventReceived);
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
									 FString::Printf(TEXT("HELO")));
}

// Called every frame
void AMIDIDrumReceiver::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType)
{
	if (EventType == "Note On" && Velocity > 0) // Check for "Note On" event and valid velocity
	{
		if (GEngine)
		{
			float Timestamp = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
											 FString::Printf(TEXT("Time: %.2f, Channel: %d, NoteID: %d, Velocity: %d, EventType: %s"),
															 Timestamp, Channel, NoteID, Velocity, *EventType));
		}

		// Handle drum sounds based on NoteID
		switch (NoteID)
		{
		case 35: // Acoustic Bass Drum
		case 36: // Kick Drum
			PlayDrumSound(KickSound, Velocity);
			break;

		case 37: // Side Stick
		case 38: // Snare Drum
			PlayDrumSound(SnareSound, Velocity);
			break;

		case 42: // Closed Hi-Hat
			PlayDrumSound(HiHatClosedSound, Velocity);
			break;

		case 46: // Open Hi-Hat
			PlayDrumSound(HiHatOpenSound, Velocity);
			break;

		case 41: // Low Floor Tom
		case 45: // Low Tom
			PlayDrumSound(TomLowSound, Velocity);
			break;

		case 47: // Mid Tom
			PlayDrumSound(TomMidSound, Velocity);
			break;

		case 50: // High Tom
			PlayDrumSound(TomHighSound, Velocity);
			break;

		case 49: // Crash Cymbal 1
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
