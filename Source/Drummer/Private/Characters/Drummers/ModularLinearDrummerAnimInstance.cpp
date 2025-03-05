// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/Drummers/ModularLinearDrummerAnimInstance.h"
#include "Characters/Drummers/ModularLinearDrummer.h"
#include "Components/SkeletalMeshComponent.h"
#include "Characters/Drummers/ModularLinearDrummerAnimInstanceProxy.h"
#include "Animation/AnimSequenceHelpers.h"

void UModularLinearDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    ModularLinearDrummer = Cast<AModularLinearDrummer>(TryGetPawnOwner());
    ModulePoses.Empty();

    if (ModularLinearDrummer)
    {
        // Initialize ModulePoses using the actor's TargetModulePoses (which now contains idle poses for all modules).
        for (const auto &ModulePair : ModularLinearDrummer->TargetModulePoses)
        {
            const FString &ModuleName = ModulePair.Key;
            const TMap<FName, FTransform> &BasePose = ModulePair.Value;

            FModulePose NewModulePose;
            NewModulePose.CurrentPose = BasePose;
            NewModulePose.TargetPose = BasePose;
            NewModulePose.InterpAlpha = 0.f;
            NewModulePose.InterpTime = 0.f;
            // You may also set NewModulePose.InterpDuration here if needed.

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
    if (ModularLinearDrummer && ModularLinearDrummer->BoneToModuleMap.Contains(BoneName))
    {
        return ModularLinearDrummer->BoneToModuleMap[BoneName];
    }
    return TEXT("Default");
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

    // Update ModulePoses with any new target poses from the actor.
    // This makes sure that if the actor updates TargetModulePoses via MIDI events, the AnimInstance gets those changes.
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

    // Then continue with your per-module blending as before:
    for (auto &ModulePair : ModulePoses)
    {
        FModulePose &ModulePose = ModulePair.Value;
        ModulePose.InterpTime += DeltaTime;
        ModulePose.InterpAlpha = FMath::Clamp(ModulePose.InterpTime / ModulePose.InterpDuration, 0.f, 1.f);

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

        if (ModulePose.InterpAlpha >= 1.f)
        {
            ModulePose.InterpTime = 0.f;
            ModulePose.InterpAlpha = 0.f;
            ModularLinearDrummer->ModuleStates.Add(ModulePair.Key, EModuleStatus::Idle);
            ModularLinearDrummer->ModuleRulesManager.SetModuleStatus(ModulePair.Key, EModuleStatus::Idle);
        }
    }

    // Combine all module poses into one overall pose.
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
