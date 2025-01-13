#pragma once

#include "CoreMinimal.h"
#include "Midi/MIDIDrumReceiver.h"
#include "SnareDrumReceiver.generated.h"

class USoundBase;
/**
 *
 */
UCLASS()
class DRUMMER_API ASnareDrumReceiver : public AMIDIDrumReceiver
{
	GENERATED_BODY()

public:
	// Override the MIDI event receiver function to handle specific note
	virtual void OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType) override;
};