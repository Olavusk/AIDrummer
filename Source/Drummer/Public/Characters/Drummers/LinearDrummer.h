#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SQLiteDatabase.h"
#include "Midi/MIDIFileBroadcaster.h"
#include "LinearDrummer.generated.h"

UCLASS()
class DRUMMER_API ALinearDrummer : public ACharacter
{
	GENERATED_BODY()

public:
	ALinearDrummer();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI")
	AMIDIFileBroadcaster *MIDIBroadcaster;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Called when a MIDI note is received.
	// The MIDI note (or its associated value) indicates the target FrameIndex.
	UFUNCTION(BlueprintCallable, Category = "MIDI")
	void OnMIDINoteReceived(int32 Channel, int32 NoteID, int32 Velocity, float Timestamp);

	// Retrieve the animation frame data for a given frame index.
	bool GetAnimationFrameData(int32 FrameIndex, TMap<FName, FTransform> &OutBoneData) const;

	// Accessor for the entire map.
	const TMap<int32, TMap<FName, FTransform>> &GetAnimationFrames() const { return AnimationFrames; }

	// Sorted keys (FrameIndices) for the loaded animation data.
	TArray<int32> SortedFrameKeys;

	TMap<int32, int32> FrameIndexToMidiNote;

	// The current target frame index as determined by the last MIDI note.
	UPROPERTY(BlueprintReadOnly, Category = "Drummer")
	int32 CurrentTargetFrameIndex;

protected:
	// Loads animation poses from the SQL database.
	void LoadAnimationFromDatabase();
	TArray<int32> GetMatchingFrameIndicesForMidiNote(int32 MidiNote);

private:
	// SQLite database and related members.
	FSQLiteDatabase Database;
	bool bDatabaseOpen;

	UPROPERTY(EditAnywhere, Category = "Database")
	FString DatabasePath;

	// Map of animation frames loaded from the database.
	// Key: FrameIndex; Value: Map of BoneName -> Transform.
	TMap<int32, TMap<FName, FTransform>> AnimationFrames;
};