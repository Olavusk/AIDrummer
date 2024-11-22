// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
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

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void HandleMIDIEvent(int32 Channel, int32 NoteID, int32 Velocity, FString EventType);
};
