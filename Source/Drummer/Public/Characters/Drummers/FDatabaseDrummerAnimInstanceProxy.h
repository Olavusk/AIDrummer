#pragma once

#include "Animation/AnimInstanceProxy.h"
#include "Characters/Drummers/DatabaseDrummerAnimInstance.h" // Your custom AnimInstance header

/**
 * Custom AnimInstanceProxy for DatabaseDrummerAnimInstance.
 * This proxy overrides PreUpdate() to cache custom data from the owning AnimInstance,
 * and then overrides Evaluate() so that the final pose is driven by our cached DrummerPoseData.
 */
class FDatabaseDrummerAnimInstanceProxy : public FAnimInstanceProxy
{
public:
    // Constructor: Accept a non-const pointer to the owning AnimInstance.
    FDatabaseDrummerAnimInstanceProxy(UAnimInstance *InAnimInstance)
        : FAnimInstanceProxy(InAnimInstance)
    {
    }

    // Override PreUpdate to copy custom data from the AnimInstance.
    virtual void PreUpdate(UAnimInstance *InAnimInstance, float DeltaSeconds) override
    {
        // Call base first.
        FAnimInstanceProxy::PreUpdate(InAnimInstance, DeltaSeconds);

        // Cast and cache our custom data.
        UDatabaseDrummerAnimInstance *MyAnimInstance = Cast<UDatabaseDrummerAnimInstance>(InAnimInstance);
        if (MyAnimInstance)
        {
            CachedDrummerPoseData = MyAnimInstance->DrummerPoseData;
        }
    }

    // Override Evaluate to inject our final pose.
    virtual bool Evaluate(FPoseContext &Output) override
    {
        UE_LOG(LogTemp, Warning, TEXT("FDatabaseDrummerAnimInstanceProxy::Evaluate() called"));

        // Use our cached custom data.
        if (CachedDrummerPoseData.BoneTransforms.Num() > 0)
        {
            const FBoneContainer &BoneContainer = Output.Pose.GetBoneContainer();
            const int32 NumBones = BoneContainer.GetNumBones();

            for (int32 BoneIndex = 0; BoneIndex < NumBones; BoneIndex++)
            {
                FCompactPoseBoneIndex CompactIndex(BoneIndex);
                if (CachedDrummerPoseData.BoneTransforms.IsValidIndex(BoneIndex))
                {
                    FTransform AppliedTransform = CachedDrummerPoseData.BoneTransforms[BoneIndex];
                    Output.Pose[CompactIndex] = AppliedTransform;
                }
                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("No computed transform for Bone %d"), BoneIndex);
                }
            }
            UE_LOG(LogTemp, Warning, TEXT("FDatabaseDrummerAnimInstanceProxy::Evaluate() finished applying custom transforms."));
            return true;
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("FDatabaseDrummerAnimInstanceProxy::Evaluate() falling back to base evaluation"));
            return FAnimInstanceProxy::Evaluate(Output);
        }
    }

private:
    // Cached custom pose data from the AnimInstance.
    FDrummerPoseData CachedDrummerPoseData;
};