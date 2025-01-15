#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQLiteDatabase.h"
#include "Midi/MIDIEventBroadcaster.h"
#include "Characters/Drummers/LiveDrummerAnimInstance.h"
#include "DataRecorder.generated.h"

UCLASS()
class DRUMMER_API ADataRecorder : public AActor
{
	GENERATED_BODY()

public:
	ADataRecorder();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	UFUNCTION(BlueprintCallable, Category = "Database")
	void InitializeDatabase();

	UFUNCTION(BlueprintCallable, Category = "Database")
	void CreateNewSession();

	UFUNCTION(BlueprintCallable, Category = "Recording")
	void StartRecording();

	UFUNCTION(BlueprintCallable, Category = "Recording")
	void StopRecording();

	UFUNCTION(BlueprintCallable, Category = "Events")
	void OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType);

	UFUNCTION(BlueprintCallable, Category = "Events")
	void OnBonePositionUpdated(FName BoneName, FVector Position);

	UFUNCTION(BlueprintCallable, Category = "Database")
	void FlushAnimationDataBuffer();

private:
	// SQLite Database
	FSQLiteDatabase Database;

	// Reference to MIDI Event Broadcaster (Editable in Blueprint)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI", meta = (AllowPrivateAccess = "true"))
	AMIDIEventBroadcaster *MIDIBroadcaster;

	// Reference to the Actor that holds the Skeletal Mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	AActor *AnimationSourceActor;

	// Expose CurrentSessionID to Blueprint (Read-Only)
	UPROPERTY(BlueprintReadOnly, Category = "Session", meta = (AllowPrivateAccess = "true"))
	FString CurrentSessionID;

	// Flag to indicate whether recording is active
	UPROPERTY(BlueprintReadOnly, Category = "Recording", meta = (AllowPrivateAccess = "true"))
	bool bIsRecording;

	// The start time of the recording
	UPROPERTY(BlueprintReadOnly, Category = "Recording", meta = (AllowPrivateAccess = "true"))
	float StartRecordingTime;
};