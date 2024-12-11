#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Midi/MIDIEventBroadcaster.h"
#include "Characters/Drummers/MIDIDrummerAnimInstance.h"
#include "SQLiteDatabase.h"
#include "DataRecorder.generated.h"

UCLASS()
class DRUMMER_API ADataRecorder : public AActor
{
	GENERATED_BODY()

public:
	// Constructor
	ADataRecorder();

	// Start and Stop Recording
	UFUNCTION(BlueprintCallable)
	void StartRecording();

	UFUNCTION(BlueprintCallable)
	void StopRecording();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Database instance
	FSQLiteDatabase Database;

	// Current Session ID (we store this as a string)
	FString CurrentSessionID;

	// Is the recording active
	bool bIsRecording;

	// Listens for MIDI Note Events
	UFUNCTION()
	void OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType);

	// Listens for Bone Position Updates
	UFUNCTION()
	void OnBonePositionUpdated(FName BoneName, FVector Position);

	// Initialize database
	void InitializeDatabase();

	// Create a new session
	void CreateNewSession();
};