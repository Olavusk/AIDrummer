#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ModularLinearDrummerAnimInstance.generated.h"

USTRUCT(BlueprintType)
struct FModulePose
{
	GENERATED_BODY()

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

	FModulePose()
		: InterpAlpha(0.f), InterpTime(0.f), InterpDuration(0.2f) // Default; can be overridden via rules
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

private:
	// Interpolation parameters.
	float InterpAlpha;
	float InterpDuration;
	float InterpTime;

	// Current and target poses for each module.
	// For simplicity, use a combined pose for bones that are not updated.
	TMap<FName, FTransform> CurrentPose;
	TMap<FName, FTransform> TargetPose;

	// Helper: Interpolate between two transforms.
	FTransform LerpTransform(const FTransform &A, const FTransform &B, float Alpha);

	// Helper: For a given bone, decide if it belongs to a module that has an updated target.
	FString GetModuleForBone(const FName &BoneName) const;

	TMap<FString, FModulePose> ModulePoses;
};