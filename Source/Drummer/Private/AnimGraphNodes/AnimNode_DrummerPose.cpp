#include "AnimGraphNodes/AnimNode_DrummerPose.h"
#include "Animation/AnimInstanceProxy.h"

void FAnimNode_DrummerPose::Initialize_AnyThread(const FAnimationInitializeContext &Context)
{
    Super::Initialize_AnyThread(Context);
}

void FAnimNode_DrummerPose::CacheBones_AnyThread(const FAnimationCacheBonesContext &Context)
{
    Super::CacheBones_AnyThread(Context);
}

bool FAnimNode_DrummerPose::IsValidToEvaluate(const USkeleton *Skeleton, const FBoneContainer &RequiredBones)
{
    return BoneTransformData.Num() > 0;
}

void FAnimNode_DrummerPose::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext &Output, TArray<FBoneTransform> &OutBoneTransforms)
{
    UE_LOG(LogTemp, Log, TEXT("Evaluating DrummerPose Anim Node"));
    const FBoneContainer &BoneContainer = Output.AnimInstanceProxy->GetRequiredBones();

    for (const auto &Bone : BoneTransformData)
    {
        FCompactPoseBoneIndex BoneIndex = BoneContainer.GetCompactPoseIndexFromSkeletonIndex(
            BoneContainer.GetReferenceSkeleton().FindBoneIndex(Bone.Key));

        if (BoneIndex.IsValid())
        {
            FTransform BoneTransform = Output.Pose.GetComponentSpaceTransform(BoneIndex);
            BoneTransform.SetTranslation(Bone.Value);
            OutBoneTransforms.Add(FBoneTransform(BoneIndex, BoneTransform));
            UE_LOG(LogTemp, Log, TEXT("Applying bone %s with transform: X=%.2f Y=%.2f Z=%.2f"),
                   *Bone.Key.ToString(), Bone.Value.X, Bone.Value.Y, Bone.Value.Z);
        }
    }
}