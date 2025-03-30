#include "Characters/Drummers/DatabaseDrummerAnimInstance.h"
#include "Characters/Drummers/DatabaseDrummer.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimSequenceHelpers.h"
#include "Characters/Drummers/FDatabaseDrummerAnimInstanceProxy.h"

void UDatabaseDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    AnimationDataModel = MakeUnique<FDrummerAnimationDataModel>();
    CurrentFrameIndex = 0;
    FrameTimeAccumulator = 0.0f;

    DatabaseDrummer = Cast<ADatabaseDrummer>(TryGetPawnOwner());

    // Initialize RetargetTransforms to identity.
    {
        const FBoneContainer &BoneContainer = GetRequiredBones();
        const int32 NumBones = BoneContainer.GetNumBones();
        RetargetTransforms.SetNum(NumBones);
        for (int32 i = 0; i < NumBones; ++i)
        {
            RetargetTransforms[i] = FTransform::Identity;
        }
    }
}

void UDatabaseDrummerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
    Super::NativeUpdateAnimation(DeltaTime);

    if (!DatabaseDrummer)
    {
        DatabaseDrummer = Cast<ADatabaseDrummer>(TryGetPawnOwner());
        if (!DatabaseDrummer || DatabaseDrummer->GetAnimationFrames().Num() == 0)
        {
            return;
        }
    }

    // Update at 30 FPS.
    FrameTimeAccumulator += DeltaTime;
    const float FrameDuration = 1.0f / 30.0f;

    if (FrameTimeAccumulator >= FrameDuration)
    {
        FrameTimeAccumulator = 0.0f;
        int32 TotalKeys = DatabaseDrummer->SortedFrameKeys.Num();
        CurrentFrameIndex = (CurrentFrameIndex + 1) % TotalKeys;
        int32 FrameKey = DatabaseDrummer->SortedFrameKeys[CurrentFrameIndex];

        if (DatabaseDrummer->GetAnimationFrames().Contains(FrameKey))
        {
            // Retrieve the raw frame data.
            TMap<FName, FTransform> FrameData = DatabaseDrummer->GetAnimationFrames().FindChecked(FrameKey);

            // Update our data model with the current frame data.
            AnimationDataModel->UpdateFromFrameData(FrameData);

            // Compute sample time. (Here, simply using CurrentFrameIndex / 30.0f)
            float SampleTime = CurrentFrameIndex / 30.0f;

            // Get the bone container.
            const FBoneContainer &BoneContainer = GetRequiredBones();
            int32 NumBones = BoneContainer.GetNumBones();

            // For each bone, evaluate the transform from the data model.
            BoneTransforms.SetNum(NumBones);
            for (int32 BoneIndex = 0; BoneIndex < NumBones; BoneIndex++)
            {
                FName BoneName = BoneContainer.GetReferenceSkeleton().GetBoneName(BoneIndex);
                FTransform EvalTransform = AnimationDataModel->EvaluateBoneTrackTransform(
                    BoneName,
                    FFrameTime(CurrentFrameIndex),
                    EAnimInterpolationType::Linear);
                BoneTransforms[BoneIndex] = EvalTransform;
            }
        }
    }
}

FAnimInstanceProxy *UDatabaseDrummerAnimInstance::CreateAnimInstanceProxy()
{
    return new FDatabaseDrummerAnimInstanceProxy(this);
}