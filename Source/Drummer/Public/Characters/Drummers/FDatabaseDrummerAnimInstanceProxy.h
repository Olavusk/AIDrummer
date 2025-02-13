#pragma once

#include "Animation/AnimInstanceProxy.h"
#include "Characters/Drummers/DatabaseDrummerAnimInstance.h"

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
            // Cache the custom bone transforms.
            CachedBoneTransforms = MyAnimInstance->BoneTransforms;
        }
    }

    virtual bool Evaluate(FPoseContext &Output) override
    {
        if (CachedBoneTransforms.Num() > 0)
        {
            const FBoneContainer &BoneContainer = Output.Pose.GetBoneContainer();
            int32 NumBones = BoneContainer.GetNumBones();

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
        else
        {
            return FAnimInstanceProxy::Evaluate(Output);
        }
    }

private:
    TArray<FTransform> CachedBoneTransforms;
};