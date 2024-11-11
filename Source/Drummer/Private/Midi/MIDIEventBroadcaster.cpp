// Fill out your copyright notice in the Description page of Project Settings.

#include "Midi/MIDIEventBroadcaster.h"

// Sets default values
AMIDIEventBroadcaster::AMIDIEventBroadcaster()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMIDIEventBroadcaster::BeginPlay()
{
	Super::BeginPlay();
}

void AMIDIEventBroadcaster::ProcessMIDIEvent(int32 Channel, int32 NoteID, int32 Velocity, const FString EventType)
{
	// Broadcast the event to any bound classes
	OnMIDINoteEvent.Broadcast(Channel, NoteID, Velocity, EventType);

	// Get the timestamp (in seconds since game start)
	float Timestamp = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;

	// Display the MIDI event with timestamp on screen
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
										 FString::Printf(TEXT("Time: %.2f, Channel: %d, NoteID: %d, Velocity: %d, EventType: %s"),
														 Timestamp, Channel, NoteID, Velocity, *EventType));
	}

	// Log the MIDI event with timestamp to the output log
	UE_LOG(LogTemp, Warning, TEXT("Time: %.2f, Channel: %d, NoteID: %d, Velocity: %d, EventType: %s"),
		   Timestamp, Channel, NoteID, Velocity, *EventType);
}

// Called every frame
void AMIDIEventBroadcaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
