// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Midi/MIDIDrumReceiver.h"
#include "KickDrumReceiver.generated.h"

/**
 *
 */
UCLASS()
class DRUMMER_API AKickDrumReceiver : public AMIDIDrumReceiver
{
	GENERATED_BODY()
public:
	// Override the MIDI event receiver function to handle specific note
	virtual void OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType) override;
};
