#include "Characters/Drummers/ModularLinearDrummerAnimInstance.h"
#include "Characters/Drummers/ModularLinearDrummer.h"
#include "Components/SkeletalMeshComponent.h"
#include "Characters/Drummers/ModularLinearDrummerAnimInstanceProxy.h"
#include "Animation/AnimSequenceHelpers.h"
#include "DrumRules/DrumModuleRules.h" // For FDrumModuleRule and FDrumModuleRulesManager

void UModularLinearDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    ModularLinearDrummer = Cast<AModularLinearDrummer>(TryGetPawnOwner());
    ModulePoses.Empty();

    if (ModularLinearDrummer)
    {
        // Initialize ModulePoses using the actor's TargetModulePoses (idle/base poses)
        for (const auto &ModulePair : ModularLinearDrummer->TargetModulePoses)
        {
            const FString &ModuleName = ModulePair.Key;
            const TMap<FName, FTransform> &IdlePose = ModulePair.Value;

            FModulePose NewModulePose;
            NewModulePose.CurrentPose = IdlePose;
            NewModulePose.TargetPose = IdlePose;
            NewModulePose.BasePose = IdlePose; // Store the base pose for returning later
            NewModulePose.InterpAlpha = 1.f;
            NewModulePose.InterpTime = 1.f;
            // We do not store a state here; the central state is in the ModuleRulesManager.
            ModulePoses.Add(ModuleName, NewModulePose);
        }
    }
}

FAnimInstanceProxy *UModularLinearDrummerAnimInstance::CreateAnimInstanceProxy()
{
    return new FModularLinearDrummerAnimInstanceProxy(this);
}

FTransform UModularLinearDrummerAnimInstance::LerpTransform(const FTransform &A, const FTransform &B, float Alpha)
{
    FVector LerpPosition = FMath::Lerp(A.GetLocation(), B.GetLocation(), Alpha);
    FQuat SlerpRotation = FQuat::Slerp(A.GetRotation(), B.GetRotation(), Alpha);
    FVector LerpScale = FMath::Lerp(A.GetScale3D(), B.GetScale3D(), Alpha);
    return FTransform(SlerpRotation, LerpPosition, LerpScale);
}

FString UModularLinearDrummerAnimInstance::GetModuleForBone(const FName &BoneName) const
{
    FString ModuleName = ModularLinearDrummer->BoneToModuleMap.Contains(BoneName)
                             ? ModularLinearDrummer->BoneToModuleMap[BoneName]
                             : TEXT("Default");

    if (!ModularLinearDrummer->ModuleRulesManager.ModuleRules.Contains(ModuleName))
    {
        ModuleName = TEXT("Default");
    }
    return ModuleName;
}

void UModularLinearDrummerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
    Super::NativeUpdateAnimation(DeltaTime);

    if (!ModularLinearDrummer)
    {
        ModularLinearDrummer = Cast<AModularLinearDrummer>(TryGetPawnOwner());
        if (!ModularLinearDrummer)
        {
            return;
        }
    }

    // --- Sync Target Poses from the Actor ---
    for (const auto &ActorPair : ModularLinearDrummer->TargetModulePoses)
    {
        const FString &ModuleName = ActorPair.Key;
        const TMap<FName, FTransform> &NewTargetPose = ActorPair.Value;
        if (ModulePoses.Contains(ModuleName))
        {
            ModulePoses[ModuleName].TargetPose = NewTargetPose;
        }
        else
        {
            FModulePose NewModulePose;
            NewModulePose.CurrentPose = NewTargetPose;
            NewModulePose.TargetPose = NewTargetPose;
            ModulePoses.Add(ModuleName, NewModulePose);
        }
    }

    // --- Per-Module Blending ---
    for (auto &ModulePair : ModulePoses)
    {
        FModulePose &ModulePose = ModulePair.Value;
        FString ModuleName = ModulePair.Key;

        // Retrieve the current state from the central ModuleRulesManager
        EModuleState CurrentState = EModuleState::Idle;
        if (ModularLinearDrummer->ModuleRulesManager.ModuleRules.Contains(ModuleName))
        {
            CurrentState = ModularLinearDrummer->ModuleRulesManager.ModuleRules[ModuleName].Status;
        }

        if (CurrentState == EModuleState::Hit)
        {
            // Accelerate towards the Hit position using an ease-in curve.
            ModulePose.InterpTime += DeltaTime;
            float RawAlpha = ModulePose.InterpTime / ModulePose.InterpDuration;
            RawAlpha = FMath::Clamp(RawAlpha, 0.f, 1.f);
            // Using an exponent of 2.0 to emphasize acceleration
            float SmoothedAlpha = FMath::InterpEaseIn(0.f, 1.f, RawAlpha, 2.0f);
            ModulePose.InterpAlpha = SmoothedAlpha;

            // When Hit interpolation completes, transition to Returning.
            if (ModulePose.InterpAlpha >= 1.f)
            {
                UE_LOG(LogTemp, Log, TEXT("Module %s: Hit pose reached, transitioning to Returning."), *ModuleName);
                ModulePose.TargetPose = ModulePose.BasePose;
                ModulePose.InterpTime = 0.f;
                ModulePose.InterpAlpha = 0.f;
                ModularLinearDrummer->ModuleRulesManager.SetModuleStatus(ModuleName, EModuleState::Returning);
            }
        }
        else if (CurrentState == EModuleState::Returning)
        {
            // Decelerate smoothly towards the Idle (base) position using an ease-out curve.
            ModulePose.InterpTime += DeltaTime;
            float ReturnDuration = ModulePose.InterpDuration; // You can adjust this if needed for a different return time.
            float RawAlpha = ModulePose.InterpTime / ReturnDuration;
            RawAlpha = FMath::Clamp(RawAlpha, 0.f, 1.f);
            // Using an exponent of 2.0 to emphasize deceleration
            float SmoothedAlpha = FMath::InterpEaseOut(0.f, 1.f, RawAlpha, 2.0f);
            ModulePose.InterpAlpha = SmoothedAlpha;

            if (ModulePose.InterpAlpha >= 1.f)
            {
                UE_LOG(LogTemp, Log, TEXT("Module %s: Returned to base, transitioning to Idle."), *ModuleName);
                ModulePose.InterpAlpha = 1.f;
                ModularLinearDrummer->ModuleRulesManager.SetModuleStatus(ModuleName, EModuleState::Idle);
                ModulePose.InterpTime = 0.f;
            }
        }
        else
        {
            // For Idle or any other state, ensure alpha is set to 1.
            ModulePose.InterpAlpha = 1.f;
        }

        // Blend each bone from the current pose to the target pose based on the computed InterpAlpha.
        for (auto &BonePair : ModulePose.TargetPose)
        {
            FName BoneName = BonePair.Key;
            FTransform CurrentTransform = ModulePose.CurrentPose.Contains(BoneName) ? ModulePose.CurrentPose[BoneName] : FTransform::Identity;
            FTransform TargetTransform = BonePair.Value;

            FTransform BlendedTransform;
            BlendedTransform.SetLocation(FMath::Lerp(CurrentTransform.GetLocation(), TargetTransform.GetLocation(), ModulePose.InterpAlpha));
            BlendedTransform.SetRotation(FQuat::Slerp(CurrentTransform.GetRotation(), TargetTransform.GetRotation(), ModulePose.InterpAlpha));
            BlendedTransform.SetScale3D(FMath::Lerp(CurrentTransform.GetScale3D(), TargetTransform.GetScale3D(), ModulePose.InterpAlpha));

            ModulePose.CurrentPose.Add(BoneName, BlendedTransform);
        }
    }

    // --- Combine All Module Poses into One Overall Pose ---
    TMap<FName, FTransform> CombinedPose;
    for (const auto &ModulePair : ModulePoses)
    {
        const FModulePose &ModulePose = ModulePair.Value;
        for (const auto &BonePair : ModulePose.CurrentPose)
        {
            CombinedPose.Add(BonePair.Key, BonePair.Value);
        }
    }

    const FBoneContainer &BoneContainer = GetRequiredBones();
    BoneTransforms.SetNum(BoneContainer.GetNumBones());
    for (int32 BoneIndex = 0; BoneIndex < BoneContainer.GetNumBones(); BoneIndex++)
    {
        FName BoneName = BoneContainer.GetReferenceSkeleton().GetBoneName(BoneIndex);
        FTransform BlendedTransform = CombinedPose.Contains(BoneName) ? CombinedPose[BoneName] : FTransform::Identity;
        BoneTransforms[BoneIndex] = BlendedTransform;
    }
}