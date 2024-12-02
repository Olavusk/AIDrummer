// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MIDIDrummerTypes.h"
#include "Midi/MIDIEventBroadcaster.h"
#include "MIDIDrummer.generated.h"

UCLASS()
class DRUMMER_API AMIDIDrummer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMIDIDrummer();

protected:
	// Reference to the MIDI Event Broadcaster
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI")
	AMIDIEventBroadcaster *MIDIBroadcaster;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void KickEnd();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void HandleMIDIEvent(int32 Channel, int32 NoteID, int32 Velocity, FString EventType);

private:
	EMIDIDrummerState CurrentState = EMIDIDrummerState::EDS_Idle;

	// Action states for each limb
	UPROPERTY(BlueprintReadWrite, Category = "ActionState", meta = (AllowPrivateAccess = "true"))
	EMIDIDrummerActionState RightFootState = EMIDIDrummerActionState::EDAS_Unoccupied;

	UPROPERTY(BlueprintReadWrite, Category = "ActionState", meta = (AllowPrivateAccess = "true"))
	EMIDIDrummerActionState LeftFootState = EMIDIDrummerActionState::EDAS_Unoccupied;

	UPROPERTY(BlueprintReadWrite, Category = "ActionState", meta = (AllowPrivateAccess = "true"))
	EMIDIDrummerActionState RightHandState = EMIDIDrummerActionState::EDAS_Unoccupied;

	UPROPERTY(BlueprintReadWrite, Category = "ActionState", meta = (AllowPrivateAccess = "true"))
	EMIDIDrummerActionState LeftHandState = EMIDIDrummerActionState::EDAS_Unoccupied;

	// Methods to update states
	void UpdateState(EMIDIDrummerState NewState);
	void UpdateLimbActionState(EMIDIDrummerActionState &LimbState, EMIDIDrummerActionState NewActionState);
	// Reset a limb's action state to Unoccupied
	void ResetLimbActionState(EMIDIDrummerActionState &LimbState);
	void SimpleDrumMontagePlay(const FName &SectionName);
	/**
	 * Animation montages
	 */
	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage *SimpleDrumMontage;
};
