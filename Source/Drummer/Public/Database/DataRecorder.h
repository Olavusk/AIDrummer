#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQLiteDatabase.h"
#include "Midi/MIDIEventBroadcaster.h"
#include "DataRecorder.generated.h"

class USoundBase;
class ULiveDrummerAnimInstance;
UCLASS()
class DRUMMER_API ADataRecorder : public AActor
{
	GENERATED_BODY()

public:
	ADataRecorder();

	UFUNCTION(BlueprintCallable, Category = "Metronome")
	void StartMetronome();

	UFUNCTION(BlueprintCallable, Category = "Metronome")
	void StopMetronome();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Metronome Sounds")
	USoundBase *MetronomeSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recording")
	int32 BeatsToRecord;

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
	void OnBoneTransformUpdated(FName BoneName, FVector LocalPosition, FQuat LocalRotation, FVector LocalScale);

private:
	// SQLite Database
	FSQLiteDatabase Database;

	FTimerHandle MetronomeTimerHandle;
	FTimerHandle AnimationTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Metronome", meta = (AllowPrivateAccess = "true"))
	float BPM;

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

	TArray<FString> MIDIEventsBuffer;
	const int32 MaxMIDIBatchSize = 100; // Adjust for performance needs

	TArray<FString> AnimationDataBuffer;
	const int32 MaxBatchSize = 100;

	void FlushAnimationDataBuffer();
	TFuture<void> FlushAnimationDataBufferAsync();

	void FlushMIDIEventsBuffer();
	TFuture<void> FlushMIDIEventsBufferAsync();

	UFUNCTION()
	void RecordAnimationFrame(); // New function declaration

	// Tick function
	void MetronomeTick();
};