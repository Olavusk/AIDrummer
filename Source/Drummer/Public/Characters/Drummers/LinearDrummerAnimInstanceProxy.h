#pragma once

#include "Animation/AnimInstanceProxy.h"
#include "Characters/Drummers/LinearDrummerAnimInstance.h" // Ensure this header defines ULinearDrummerAnimInstance

/**
 * FLinearDrummerAnimInstanceProxy
 * A custom AnimInstance proxy that works with ULinearDrummerAnimInstance.
 * It copies the BoneTransforms computed by the AnimInstance into the final pose.
 */
class FLinearDrummerAnimInstanceProxy : public FAnimInstanceProxy
{
public:
    FLinearDrummerAnimInstanceProxy(ULinearDrummerAnimInstance *InAnimInstance)
        : FAnimInstanceProxy(InAnimInstance)
    {
    }

    virtual void PreUpdate(UAnimInstance *InAnimInstance, float DeltaSeconds) override
    {
        // Let the base class do its work
        FAnimInstanceProxy::PreUpdate(InAnimInstance, DeltaSeconds);

        // Try to cast to our custom anim instance and cache its BoneTransforms
        if (ULinearDrummerAnimInstance *MyDrummerInstance = Cast<ULinearDrummerAnimInstance>(InAnimInstance))
        {
            CachedBoneTransforms = MyDrummerInstance->BoneTransforms;
        }
    }

    virtual bool Evaluate(FPoseContext &Output) override
    {
        if (CachedBoneTransforms.Num() > 0)
        {
            const FBoneContainer &BoneContainer = Output.Pose.GetBoneContainer();
            const int32 NumBones = BoneContainer.GetNumBones();

            // For each bone, assign the cached transform (if available) into the output pose.
            for (int32 BoneIndex = 0; BoneIndex < NumBones; BoneIndex++)
            {
                FCompactPoseBoneIndex CompactIndex(BoneIndex);
                if (CachedBoneTransforms.IsValidIndex(BoneIndex))
                {
                    Output.Pose[CompactIndex] = CachedBoneTransforms[BoneIndex];
                }
            }
            return true;
        }
        return FAnimInstanceProxy::Evaluate(Output);
    }

private:
    TArray<FTransform> CachedBoneTransforms;
};