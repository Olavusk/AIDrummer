#pragma once

#include "Animation/AnimInstanceProxy.h"
#include "Characters/Drummers/DatabaseDrummerAnimInstance.h"

/**
 * Custom AnimInstanceProxy for DatabaseDrummerAnimInstance.
 * This proxy overrides PreUpdate() to cache custom data from the owning AnimInstance,
 * and then overrides Evaluate() so that the final pose is driven by our cached DrummerPoseData.
 */
class FDatabaseDrummerAnimInstanceProxy : public FAnimInstanceProxy
{
public:
    FDatabaseDrummerAnimInstanceProxy(UAnimInstance *InAnimInstance)
        : FAnimInstanceProxy(InAnimInstance)
    {
    }

    virtual void PreUpdate(UAnimInstance *InAnimInstance, float DeltaSeconds) override
    {
        FAnimInstanceProxy::PreUpdate(InAnimInstance, DeltaSeconds);
        if (UDatabaseDrummerAnimInstance *MyAnimInstance = Cast<UDatabaseDrummerAnimInstance>(InAnimInstance))
        {
            CachedDrummerPoseData = MyAnimInstance->DrummerPoseData;
        }
    }

    virtual bool Evaluate(FPoseContext &Output) override
    {
        if (CachedDrummerPoseData.BoneTransforms.Num() > 0)
        {
            const FBoneContainer &BoneContainer = Output.Pose.GetBoneContainer();
            const int32 NumBones = BoneContainer.GetNumBones();

            for (int32 BoneIndex = 0; BoneIndex < NumBones; BoneIndex++)
            {
                FCompactPoseBoneIndex CompactIndex(BoneIndex);
                if (CachedDrummerPoseData.BoneTransforms.IsValidIndex(BoneIndex))
                {
                    Output.Pose[CompactIndex] = CachedDrummerPoseData.BoneTransforms[BoneIndex];
                }
            }
            return true;
        }
        else
        {
            return FAnimInstanceProxy::Evaluate(Output);
        }
    }

private:
    FDrummerPoseData CachedDrummerPoseData;
};