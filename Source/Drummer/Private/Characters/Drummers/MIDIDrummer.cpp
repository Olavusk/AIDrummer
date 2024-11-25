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

	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.AddDynamic(this, &AMIDIDrummer::HandleMIDIEvent);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Turquoise, TEXT("Bound to MIDIBroadcaster!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("MIDIBroadcaster is not assigned in MIDIDrummer."));
	}
}

void AMIDIDrummer::HandleMIDIEvent(int32 Channel, int32 NoteID, int32 Velocity, FString EventType)
{
	// Log or process the MIDI event
	UE_LOG(LogTemp, Log, TEXT("MIDIDrummer received MIDI Event - Channel: %d, Note: %d, Velocity: %d, EventType: %s"),
		   Channel, NoteID, Velocity, *EventType);

	// can add additional handling logic here (e.g., triggering animations or sounds)
}

// Called every frame
void AMIDIDrummer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
