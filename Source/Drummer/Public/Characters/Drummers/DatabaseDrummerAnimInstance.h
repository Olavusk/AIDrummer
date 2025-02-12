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
	virtual void NativePostEvaluateAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	virtual FAnimInstanceProxy *CreateAnimInstanceProxy() override;

private:
	TUniquePtr<class FDrummerAnimationDataModel> AnimationDataModel;

	int32 CurrentFrameIndex;
	float FrameTimeAccumulator;

	TArray<FTransform> RetargetTransforms;

	TSet<FName> ImportantBones = {
		FName("Newton"),
		FName("Root"),
		FName("Hips"),
		FName("LeftThigh"),
		FName("LeftShin"),
		FName("LeftFoot"),
		FName("LeftToe"),
		FName("RightThigh"),
		FName("RightShin"),
		FName("RightFoot"),
		FName("RightToe"),
		FName("Spine1"),
		FName("Spine2"),
		FName("Spine3"),
		FName("Spine4"),
		FName("LeftShoulder"),
		FName("LeftArm"),
		FName("LeftForeArm"),
		FName("LeftHand"),
		FName("LeftFinger1Metacarpal"),
		FName("LeftFinger1Proximal"),
		FName("LeftFinger1Distal"),
		FName("LeftFinger2Metacarpal"),
		FName("LeftFinger2Proximal"),
		FName("LeftFinger2Medial"),
		FName("LeftFinger2Distal"),
		FName("LeftFinger3Metacarpal"),
		FName("LeftFinger3Proximal"),
		FName("LeftFinger3Medial"),
		FName("LeftFinger3Distal"),
		FName("LeftFinger4Metacarpal"),
		FName("LeftFinger4Proximal"),
		FName("LeftFinger4Medial"),
		FName("LeftFinger4Distal"),
		FName("LeftFinger5Metacarpal"),
		FName("LeftFinger5Proximal"),
		FName("LeftFinger5Medial"),
		FName("LeftFinger5Distal"),
		FName("Neck"),
		FName("Head"),
		FName("RightShoulder"),
		FName("RightArm"),
		FName("RightForeArm"),
		FName("RightHand"),
		FName("RightFinger1Metacarpal"),
		FName("RightFinger1Proximal"),
		FName("RightFinger1Distal"),
		FName("RightFinger2Metacarpal"),
		FName("RightFinger2Proximal"),
		FName("RightFinger2Medial"),
		FName("RightFinger2Distal"),
		FName("RightFinger3Metacarpal"),
		FName("RightFinger3Proximal"),
		FName("RightFinger3Medial"),
		FName("RightFinger3Distal"),
		FName("RightFinger4Metacarpal"),
		FName("RightFinger4Proximal"),
		FName("RightFinger4Medial"),
		FName("RightFinger4Distal"),
		FName("RightFinger5Metacarpal"),
		FName("RightFinger5Proximal"),
		FName("RightFinger5Medial"),
		FName("RightFinger5Distal"),
	};
};