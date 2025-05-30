#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DrumRules/DrumModuleRules.h"
#include "SQLiteDatabase.h"
#include "Midi/MIDIFileBroadcaster.h"
#include "Characters/Drummers/MIDIDrummerTypes.h"
#include "ModularLinearDrummer.generated.h"

class BoneToModuleMap;
UCLASS()
class DRUMMER_API AModularLinearDrummer : public ACharacter
{
	GENERATED_BODY()

public:
	AModularLinearDrummer();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MIDI")
	AMIDIFileBroadcaster *MIDIBroadcaster;

	// Called when a MIDI note is received.
	UFUNCTION(BlueprintCallable, Category = "MIDI")
	void OnMIDINoteReceived(int32 Channel, int32 NoteID, int32 Velocity, float Timestamp);

	// Retrieve the animation frame data for a given frame index.
	bool GetAnimationFrameData(int32 FrameIndex, TMap<FName, FTransform> &OutBoneData) const;

	// Given a drum hit type, get candidate frame indices.
	TArray<int32> GetMatchingFrameIndicesForMidiNote(int32 MidiNote);

	// Returns the target pose for a given module (if available).
	bool GetModuleTargetPose(const FString &ModuleName, TMap<FName, FTransform> &OutBoneData) const;

	// Preloaded animation frames (keyed by FrameIndex).
	TMap<int32, TMap<FName, FTransform>> AnimationFrames;

	void SetupDefaultIdlePoses();
	// Sorted frame indices.
	TArray<int32> SortedFrameKeys;

	// Where we define rules (put in Public/DrumRules/DrumModuleRules.h)
	FDrumModuleRulesManager ModuleRulesManager;

	// The current target frame for the entire actor (for backward compatibility).
	UPROPERTY(BlueprintReadOnly, Category = "Drummer")
	int32 CurrentTargetFrameIndex;

	// For modular control, store target poses per module.
	// Key: Module name (e.g., "RightLeg", "LeftArm"), Value: Target pose (per-bone transforms)
	TMap<FString, TMap<FName, FTransform>> TargetModulePoses;

	// Optional: a mapping from bone name to module.
	// This could be defined in code or loaded from a config.
	UPROPERTY(BlueprintReadOnly, Category = "Drummer|Config")
	TMap<FName, FString> BoneToModuleMap;

	UPROPERTY(BlueprintReadOnly, Category = "Drummer|Config")
	TMap<FName, FName> BoneRetargetMap;

	TMap<int32, TArray<int32>> FrameIndexToMidiNote;

	// Loads animation frames from the SQL database.
	void LoadAnimationFromDatabase();

private:
	FString DatabasePath;
	bool bDatabaseOpen;

	// Database handle, etc.
	FSQLiteDatabase Database;

	// Preloaded body poses for random selection
	TArray<TMap<FName, FTransform>> BodyPoses;
};