#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ModularLinearDrummerAnimInstance.generated.h"

// This struct now holds only animation and interpolation parameters.
// The module state is maintained solely in the DrumModuleRulesManager.
USTRUCT(BlueprintType)
struct FModulePose
{
	GENERATED_BODY()

	// Base (idle) pose for the module (mapping of bone name to transform)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TMap<FName, FTransform> BasePose;

	// Current pose for the module (mapping of bone name to transform)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TMap<FName, FTransform> CurrentPose;

	// Target pose for the module
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TMap<FName, FTransform> TargetPose;

	// Interpolation parameters (could be per module)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float InterpAlpha;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float InterpTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float InterpDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float ReturnVelocity;

	FModulePose()
		: InterpAlpha(0.f), InterpTime(0.f), InterpDuration(0.2f), ReturnVelocity(0.f)
	{
	}
};

UCLASS()
class DRUMMER_API UModularLinearDrummerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	// Pointer to the owning ModularLinearDrummer.
	UPROPERTY(BlueprintReadOnly, Category = "Drummer")
	class AModularLinearDrummer *ModularLinearDrummer;

	// Final bone transforms to be applied.
	TArray<FTransform> BoneTransforms;

protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;
	virtual FAnimInstanceProxy *CreateAnimInstanceProxy() override;

	// Maximum allowed translation offset from base for the Hips bone
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Clamping")
	FVector MaxHipsOffset = FVector(0.5f, 5.f, 0.5f);

private:
	// Helper: Interpolate between two transforms.
	FTransform LerpTransform(const FTransform &A, const FTransform &B, float Alpha);

	// Helper: For a given bone, decide if it belongs to a module that has an updated target.
	FString GetModuleForBone(const FName &BoneName) const;

	// Stores per-module animation blending state.
	TMap<FString, FModulePose> ModulePoses;
};