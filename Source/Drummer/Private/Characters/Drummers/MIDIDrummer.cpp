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
	UE_LOG(LogTemp, Log, TEXT("MIDIDrummer received MIDI Event - Channel: %d, Note: %d, Velocity: %d, EventType: %s"),
		   Channel, NoteID, Velocity, *EventType);

	// Update drummer state to Drumming
	UpdateState(EMIDIDrummerState::EDS_Drumming);

	switch (NoteID)
	{
	case 36: // Kick drum (Right foot)
		if (RightFootState == EMIDIDrummerActionState::EDAS_Unoccupied)
		{
			UpdateLimbActionState(RightFootState, EMIDIDrummerActionState::EDAS_Moving);
			SimpleDrumMontagePlay(FName("Kick_1"));
		}
		break;

	case 38: // Snare drum (Left hand)
		if (LeftHandState == EMIDIDrummerActionState::EDAS_Unoccupied)
		{
			UpdateLimbActionState(LeftHandState, EMIDIDrummerActionState::EDAS_Moving);
			SimpleDrumMontagePlay(FName("Snare_1"));
		}
		break;

	case 40: // High tom (Right hand)
		if (RightHandState == EMIDIDrummerActionState::EDAS_Unoccupied)
		{
			UpdateLimbActionState(RightHandState, EMIDIDrummerActionState::EDAS_Moving);
			SimpleDrumMontagePlay(FName("Tom_High"));
		}
		break;

	case 48: // Low tom (Left foot)
		if (LeftFootState == EMIDIDrummerActionState::EDAS_Unoccupied)
		{
			UpdateLimbActionState(LeftFootState, EMIDIDrummerActionState::EDAS_Moving);
			SimpleDrumMontagePlay(FName("Tom_Low"));
		}
		break;

	default:
		UE_LOG(LogTemp, Warning, TEXT("Unmapped MIDI Note: %d"), NoteID);
		break;
	}
}

void AMIDIDrummer::SimpleDrumMontagePlay(const FName &SectionName)
{
	// Ensure montage and animation instance are valid
	UAnimInstance *AnimInstance = GetMesh()->GetAnimInstance();
	if (!AnimInstance || !SimpleDrumMontage)
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimInstance or SimpleDrumMontage is not assigned."));
		return;
	}

	// Play montage and jump to section
	AnimInstance->Montage_Play(SimpleDrumMontage);
	AnimInstance->Montage_JumpToSection(SectionName, SimpleDrumMontage);

	UE_LOG(LogTemp, Log, TEXT("Playing montage section %s."), *SectionName.ToString());
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

void AMIDIDrummer::UpdateLimbActionState(EMIDIDrummerActionState &LimbState, EMIDIDrummerActionState NewActionState)
{
	// Transition logic
	if (LimbState == EMIDIDrummerActionState::EDAS_Unoccupied && NewActionState == EMIDIDrummerActionState::EDAS_Moving)
	{
		LimbState = EMIDIDrummerActionState::EDAS_Moving;
		UE_LOG(LogTemp, Log, TEXT("Limb transitioned to Moving."));
	}
	else if (LimbState == EMIDIDrummerActionState::EDAS_Moving && NewActionState == EMIDIDrummerActionState::EDAS_Unoccupied)
	{
		LimbState = EMIDIDrummerActionState::EDAS_Unoccupied;
		UE_LOG(LogTemp, Log, TEXT("Limb transitioned to Unoccupied."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid state transition."));
	}
}

void AMIDIDrummer::ResetLimbActionState(EMIDIDrummerActionState &LimbState)
{
	LimbState = EMIDIDrummerActionState::EDAS_Unoccupied;
	UE_LOG(LogTemp, Log, TEXT("Limb state reset to Unoccupied."));
}

void AMIDIDrummer::KickEnd()
{
	RightFootState = EMIDIDrummerActionState::EDAS_Unoccupied;
}

// Called every frame
void AMIDIDrummer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
