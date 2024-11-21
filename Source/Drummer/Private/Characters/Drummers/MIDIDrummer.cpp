// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/Drummers/MIDIDrummer.h"

// Sets default values
AMIDIDrummer::AMIDIDrummer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMIDIDrummer::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMIDIDrummer::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType)
{
	float Timestamp = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.0f;

	// Handle MIDI event
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
										 FString::Printf(TEXT("Time: %.2f, Channel: %d, NoteID: %d, Velocity: %d, EventType: %s"),
														 Timestamp, Channel, NoteID, Velocity, *EventType));
	}
}

// Called every frame
void AMIDIDrummer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
