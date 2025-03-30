#include "Characters/Drummers/LinearDrummerAnimInstance.h"
#include "Characters/Drummers/LinearDrummer.h"
#include "Components/SkeletalMeshComponent.h"
#include "Characters/Drummers/LinearDrummerAnimInstanceProxy.h"
#include "Animation/AnimSequenceHelpers.h"

void ULinearDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    LinearDrummer = Cast<ALinearDrummer>(TryGetPawnOwner());
    InterpAlpha = 0.0f;
    InterpDuration = 0.2f; // Adjust as needed for a smooth transition.
    InterpTime = 0.0f;

    // Initialize current and target poses.
    if (LinearDrummer)
    {
        TMap<FName, FTransform> InitialPose;
        // Use the first key if available.
        if (LinearDrummer->SortedFrameKeys.Num() > 0 &&
            LinearDrummer->GetAnimationFrameData(LinearDrummer->SortedFrameKeys[0], InitialPose))
        {
            CurrentPose = InitialPose;
            TargetPose = InitialPose;
        }
    }
}

FAnimInstanceProxy *ULinearDrummerAnimInstance::CreateAnimInstanceProxy()
{
    return new FLinearDrummerAnimInstanceProxy(this);
}

bool AreTransformMapsEqual(const TMap<FName, FTransform> &A, const TMap<FName, FTransform> &B, float Tolerance = KINDA_SMALL_NUMBER)
{
    if (A.Num() != B.Num())
    {
        return false;
    }
    for (const auto &Pair : A)
    {
        if (!B.Contains(Pair.Key))
        {
            return false;
        }
        // Use FTransform::Equals to compare with tolerance.
        if (!Pair.Value.Equals(B[Pair.Key], Tolerance))
        {
            return false;
        }
    }
    return true;
}

void ULinearDrummerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
    Super::NativeUpdateAnimation(DeltaTime);

    if (!LinearDrummer)
    {
        LinearDrummer = Cast<ALinearDrummer>(TryGetPawnOwner());
        if (!LinearDrummer)
        {
            return;
        }
    }

    // Get the new target pose corresponding to the current target frame index (set by MIDI).
    TMap<FName, FTransform> NewTargetPose;
    if (LinearDrummer->GetAnimationFrameData(LinearDrummer->CurrentTargetFrameIndex, NewTargetPose))
    {
        // If the target has changed, reset the interpolation.
        if (!AreTransformMapsEqual(TargetPose, NewTargetPose))
        {
            TargetPose = NewTargetPose;
            InterpTime = 0.0f;
            InterpAlpha = 0.0f;
        }
    }

    // Update interpolation.
    InterpTime += DeltaTime;
    InterpAlpha = FMath::Clamp(InterpTime / InterpDuration, 0.0f, 1.0f);
    UE_LOG(LogTemp, Warning, TEXT("NativeUpdateAnimation: InterpAlpha = %.2f"), InterpAlpha);
    // Interpolate from CurrentPose to TargetPose.
    TMap<FName, FTransform> InterpolatedPose;
    for (auto &Elem : TargetPose)
    {
        FName BoneName = Elem.Key;
        FTransform CurrentTransform = CurrentPose.Contains(BoneName) ? CurrentPose[BoneName] : FTransform::Identity;
        FTransform TargetTransform = Elem.Value;
        FTransform BlendedTransform = LerpTransform(CurrentTransform, TargetTransform, InterpAlpha);
        InterpolatedPose.Add(BoneName, BlendedTransform);
    }

    // If the interpolation is complete, update CurrentPose.
    if (InterpAlpha >= 1.0f)
    {
        CurrentPose = TargetPose;
    }

    // Update the BoneTransforms array for the skeleton.
    const FBoneContainer &BoneContainer = GetRequiredBones();
    int32 NumBones = BoneContainer.GetNumBones();
    BoneTransforms.SetNum(NumBones);
    for (int32 BoneIndex = 0; BoneIndex < NumBones; BoneIndex++)
    {
        FName BoneName = BoneContainer.GetReferenceSkeleton().GetBoneName(BoneIndex);
        FTransform BlendedTransform = InterpolatedPose.Contains(BoneName) ? InterpolatedPose[BoneName] : FTransform::Identity;
        BoneTransforms[BoneIndex] = BlendedTransform;
    }
}

FTransform ULinearDrummerAnimInstance::LerpTransform(const FTransform &A, const FTransform &B, float Alpha)
{
    FVector LerpPosition = FMath::Lerp(A.GetLocation(), B.GetLocation(), Alpha);
    FQuat SlerpRotation = FQuat::Slerp(A.GetRotation(), B.GetRotation(), Alpha);
    FVector LerpScale = FMath::Lerp(A.GetScale3D(), B.GetScale3D(), Alpha);
    return FTransform(SlerpRotation, LerpPosition, LerpScale);
}