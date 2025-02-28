#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "LinearDrummerAnimInstance.generated.h"

UCLASS()
class DRUMMER_API ULinearDrummerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	// Pointer to the owning LinearDrummer.
	UPROPERTY(BlueprintReadOnly, Category = "Drummer")
	class ALinearDrummer *LinearDrummer;
	TArray<FTransform> BoneTransforms;

protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	virtual FAnimInstanceProxy *CreateAnimInstanceProxy() override;

private:
	// Current interpolation factor (0.0 to 1.0).
	float InterpAlpha;

	// Duration for transitioning from the current pose to the target pose (seconds).
	float InterpDuration;

	// Time accumulator for the interpolation.
	float InterpTime;

	// The current pose (bone transforms) and the target pose.
	TMap<FName, FTransform> CurrentPose;
	TMap<FName, FTransform> TargetPose;

	// Helper function: linearly interpolate between two transforms.
	FTransform LerpTransform(const FTransform &A, const FTransform &B, float Alpha);
};