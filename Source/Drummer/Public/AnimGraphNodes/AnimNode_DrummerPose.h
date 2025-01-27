#pragma once

#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_DrummerPose.generated.h"

USTRUCT(BlueprintInternalUseOnly)
struct DRUMMER_API FAnimNode_DrummerPose : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()

public:
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext &Output, TArray<FBoneTransform> &OutBoneTransforms) override;

	virtual bool IsValidToEvaluate(const USkeleton *Skeleton, const FBoneContainer &RequiredBones) override;

	virtual void Initialize_AnyThread(const FAnimationInitializeContext &Context) override;

	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext &Context) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	TMap<FName, FVector> BoneTransformData;
};