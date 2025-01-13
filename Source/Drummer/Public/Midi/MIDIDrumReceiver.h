// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MIDIEventBroadcaster.h"
#include "Interfaces/MIDIEventReceiver.h"
#include "MIDIDrumReceiver.generated.h"

class USoundBase;
UCLASS()
class DRUMMER_API AMIDIDrumReceiver : public AActor, public IMIDIEventReceiver
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMIDIDrumReceiver();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Reference to MIDI Event Broadcaster
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI")
	AMIDIEventBroadcaster *MIDIBroadcaster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drum Sounds")
	USoundBase *KickSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drum Sounds")
	USoundBase *SnareSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drum Sounds")
	USoundBase *HiHatClosedSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drum Sounds")
	USoundBase *HiHatOpenSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drum Sounds")
	USoundBase *TomLowSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drum Sounds")
	USoundBase *TomMidSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drum Sounds")
	USoundBase *TomHighSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drum Sounds")
	USoundBase *CrashCymbalSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drum Sounds")
	USoundBase *RideCymbalSound;

	// Helper function to play sound with velocity modulation
	void PlayDrumSound(USoundBase *DrumSound, int32 Velocity);

public:
	// Handle MIDI events
	UFUNCTION(BlueprintCallable, Category = "MIDI Events")
	virtual void OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType) override;
};
