#pragma once

#include "Animation/AnimInstanceProxy.h"
#include "Characters/Drummers/ModularLinearDrummerAnimInstance.h"

/**
 * FModularLinearDrummerAnimInstanceProxy
 * A custom AnimInstance proxy for UModularLinearDrummerAnimInstance.
 * It caches the BoneTransforms computed by the anim instance and writes them
 * out to the final pose for the skeletal mesh.
 */
class FModularLinearDrummerAnimInstanceProxy : public FAnimInstanceProxy
{
public:
    FModularLinearDrummerAnimInstanceProxy(UModularLinearDrummerAnimInstance *InAnimInstance)
        : FAnimInstanceProxy(InAnimInstance)
    {
    }

    virtual void PreUpdate(UAnimInstance *InAnimInstance, float DeltaSeconds) override
    {
        FAnimInstanceProxy::PreUpdate(InAnimInstance, DeltaSeconds);

        if (UModularLinearDrummerAnimInstance *MyDrummerInstance = Cast<UModularLinearDrummerAnimInstance>(InAnimInstance))
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