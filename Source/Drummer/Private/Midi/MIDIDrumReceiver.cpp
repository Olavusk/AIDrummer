// Fill out your copyright notice in the Description page of Project Settings.
#include "Midi/MIDIDrumReceiver.h"
#include "Engine/Engine.h" // For AddOnScreenDebugMessage

// Sets default values
AMIDIDrumReceiver::AMIDIDrumReceiver()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
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
void AMIDIDrumReceiver::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, const FString EventType)
{
	float Timestamp = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;

	// Handle MIDI event directly with input parameters
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
										 FString::FString::Printf(TEXT("Time: %.2f, Channel: %d, NoteID: %d, Velocity: %d, EventType: %s"),
																  Timestamp, Channel, NoteID, Velocity, *EventType));
	}
}
