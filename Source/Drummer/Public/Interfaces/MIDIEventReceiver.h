// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MIDIEventReceiver.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMIDIEventReceiver : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class DRUMMER_API IMIDIEventReceiver
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, const FString EventType) = 0;
};
