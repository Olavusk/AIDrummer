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

	// Update drummer state to Drumming
	UpdateState(EMIDIDrummerState::EDS_Drumming);

	// Handle specific MIDI notes for each limb
	switch (NoteID)
	{
	case 36: // Kick drum (Right foot)
		UpdateLimbActionState(RightFootState, EMIDIDrummerActionState::EDAS_RightFootMove);
		break;

	case 38: // Snare drum (Left hand)
		UpdateLimbActionState(LeftHandState, EMIDIDrummerActionState::EDAS_LeftHandMove);
		break;

	case 40: // High tom (Right hand)
		UpdateLimbActionState(RightHandState, EMIDIDrummerActionState::EDAS_RightHandMove);
		break;

	case 48: // Low tom (Left foot)
		UpdateLimbActionState(LeftFootState, EMIDIDrummerActionState::EDAS_LeftFootMove);
		break;

	default:
		UE_LOG(LogTemp, Warning, TEXT("Unmapped MIDI Note: %d"), NoteID);
		break;
	}
}

// Update the overall state of the drummer
void AMIDIDrummer::UpdateState(EMIDIDrummerState NewState)
{
	if (CurrentState != NewState)
	{
		CurrentState = NewState;
		UE_LOG(LogTemp, Log, TEXT("Drummer State updated to: %d"), static_cast<int32>(NewState));
	}
}

// Update the action state of a specific limb
void AMIDIDrummer::UpdateLimbActionState(EMIDIDrummerActionState &LimbState, EMIDIDrummerActionState NewActionState)
{
	if (LimbState != NewActionState)
	{
		LimbState = NewActionState;
		UE_LOG(LogTemp, Log, TEXT("Limb Action State updated to: %d"), static_cast<int32>(NewActionState));

		// Schedule a reset to Unoccupied after 0.5 seconds
	}
}

void AMIDIDrummer::ResetLimbActionState(EMIDIDrummerActionState &LimbState)
{
	LimbState = EMIDIDrummerActionState::EDAS_Unoccupied;
	UE_LOG(LogTemp, Log, TEXT("Limb Action State reset to Unoccupied"));
}

// Called every frame
void AMIDIDrummer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
