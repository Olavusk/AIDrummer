#pragma once

#include "CoreMinimal.h"
#include "AnimPoses/DrummerPoseData.h"
#include "Animation/AnimInstance.h"
#include "Characters/FDrummerAnimationDataModel.h"
#include "DatabaseDrummerAnimInstance.generated.h"

UCLASS()
class DRUMMER_API UDatabaseDrummerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	class ADatabaseDrummer *DatabaseDrummer;

	FDrummerPoseData DrummerPoseData;

protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	virtual FAnimInstanceProxy *CreateAnimInstanceProxy() override;

private:
	TUniquePtr<class FDrummerAnimationDataModel> AnimationDataModel;

	int32 CurrentFrameIndex;
	float FrameTimeAccumulator;

	TArray<FTransform> RetargetTransforms;
};