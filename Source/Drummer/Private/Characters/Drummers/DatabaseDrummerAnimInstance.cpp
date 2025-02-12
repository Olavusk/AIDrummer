#include "Characters/Drummers/DatabaseDrummerAnimInstance.h"
#include "Characters/Drummers/DatabaseDrummer.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimSequenceHelpers.h"
#include "Characters/Drummers/FDatabaseDrummerAnimInstanceProxy.h"

void UDatabaseDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    // Initialize our data model.
    AnimationDataModel = MakeUnique<FDrummerAnimationDataModel>();

    CurrentFrameIndex = 0;
    FrameTimeAccumulator = 0.0f;

    // Cache our owning DatabaseDrummer (if available).
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

    // Ensure our DatabaseDrummer is valid.
    if (!DatabaseDrummer)
    {
        DatabaseDrummer = Cast<ADatabaseDrummer>(TryGetPawnOwner());
        if (!DatabaseDrummer || DatabaseDrummer->GetAnimationFrames().Num() == 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("AnimInstance: DatabaseDrummer is invalid or has no animation frames."));
            return;
        }
    }

    FrameTimeAccumulator += DeltaTime;
    const float FrameDuration = 1.0f / 30.0f; // 30 FPS update rate

    if (FrameTimeAccumulator >= FrameDuration)
    {
        FrameTimeAccumulator = 0.0f;

        const int32 TotalKeys = DatabaseDrummer->SortedFrameKeys.Num();
        CurrentFrameIndex = (CurrentFrameIndex + 1) % TotalKeys;
        const int32 FrameKey = DatabaseDrummer->SortedFrameKeys[CurrentFrameIndex];

        UE_LOG(LogTemp, Warning, TEXT("NativeUpdateAnimation: CurrentFrameIndex: %d, FrameKey: %d"), CurrentFrameIndex, FrameKey);

        if (DatabaseDrummer->GetAnimationFrames().Contains(FrameKey))
        {
            // Retrieve raw frame data from the database and filter by our ImportantBones.
            TMap<FName, FTransform> FrameData = DatabaseDrummer->GetAnimationFrames().FindChecked(FrameKey);
            TMap<FName, FTransform> FilteredFrameData;
            for (const TPair<FName, FTransform> &Pair : FrameData)
            {
                if (ImportantBones.Contains(Pair.Key))
                {
                    FilteredFrameData.Add(Pair.Key, Pair.Value);
                    UE_LOG(LogTemp, Warning, TEXT("Filtering: Bone %s raw transform: %s"),
                           *Pair.Key.ToString(),
                           *Pair.Value.ToString());
                }
            }

            // Update our data model with the filtered raw data.
            AnimationDataModel->UpdateFromFrameData(FilteredFrameData);

            // Compute a sample time that should vary with the frame index.
            // (Adjust 787 if your total frame count differs.)
            const float TotalAnimationDuration = 787.0f / 30.0f;
            const float SampleTime = (CurrentFrameIndex / 787.0f) * TotalAnimationDuration;
            UE_LOG(LogTemp, Warning, TEXT("NativeUpdateAnimation: SampleTime: %f"), SampleTime);

            // Get the bone container from our AnimInstance.
            const FBoneContainer &BoneContainer = GetRequiredBones();
            check(BoneContainer.GetNumBones() > 0);
            const int32 NumBones = BoneContainer.GetNumBones();

            // Bypass BuildPoseFromModel:
            // For each bone, directly query the data model for its evaluated transform
            // at the current frame.
            DrummerPoseData.BoneTransforms.SetNum(NumBones);
            for (int32 BoneIndex = 0; BoneIndex < NumBones; BoneIndex++)
            {
                // Get the bone name from the reference skeleton.
                FName BoneName = BoneContainer.GetReferenceSkeleton().GetBoneName(BoneIndex);
                // Evaluate the transform for this bone.
                FTransform EvalTransform = AnimationDataModel->EvaluateBoneTrackTransform(
                    BoneName,
                    FFrameTime(CurrentFrameIndex),
                    EAnimInterpolationType::Linear);
                DrummerPoseData.BoneTransforms[BoneIndex] = EvalTransform;
            }

            UE_LOG(LogTemp, Warning, TEXT("AnimInstance: Updated DrummerPoseData with %d bone transforms."),
                   DrummerPoseData.BoneTransforms.Num());

            // Log the Hips transform for a key bone check.
            int32 HipsIndex = BoneContainer.GetReferenceSkeleton().FindBoneIndex(FName("Hips"));
            if (DrummerPoseData.BoneTransforms.IsValidIndex(HipsIndex))
            {
                UE_LOG(LogTemp, Warning, TEXT("AnimInstance: Hips transform: %s"),
                       *DrummerPoseData.BoneTransforms[HipsIndex].ToString());
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("AnimInstance: Frame key %d not found in AnimationFrames."), FrameKey);
        }
    }
}

void UDatabaseDrummerAnimInstance::NativePostEvaluateAnimation()
{
    Super::NativePostEvaluateAnimation();

    // You may leave this empty since our custom AnimInstanceProxy will drive the final pose.
    // Optionally, you can call MarkRenderTransformDirty() if needed.
    if (USkeletalMeshComponent *SkelComp = GetSkelMeshComponent())
    {
        SkelComp->MarkRenderTransformDirty();
    }
}

FAnimInstanceProxy *UDatabaseDrummerAnimInstance::CreateAnimInstanceProxy()
{
    // Return an instance of our custom AnimInstanceProxy.
    return new FDatabaseDrummerAnimInstanceProxy(this);
}