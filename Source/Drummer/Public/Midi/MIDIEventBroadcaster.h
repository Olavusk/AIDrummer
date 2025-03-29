// MIDIEventBroadcaster.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MIDIEventBroadcaster.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMIDINoteEvent, int32, Channel, int32, NoteID, int32, Velocity, FString, EventType);

UCLASS()
class DRUMMER_API AMIDIEventBroadcaster : public AActor
{
	GENERATED_BODY()

public:
	AMIDIEventBroadcaster();

	// Dispatcher for broadcasting MIDI events
	UPROPERTY(BlueprintAssignable, Category = "MIDI Events")
	FMIDINoteEvent OnMIDINoteEvent;

	// Function to process MIDI events
	UFUNCTION(BlueprintCallable, Category = "MIDI Events")
	void ProcessMIDIEvent(int32 Channel, int32 NoteID, int32 Velocity, const FString EventType);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};