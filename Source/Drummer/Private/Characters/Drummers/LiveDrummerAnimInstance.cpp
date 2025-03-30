// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/Drummers/LiveDrummerAnimInstance.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"

void ULiveDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    UE_LOG(LogTemp, Log, TEXT("LiveDrummerAnimInstance: Initialized and ready to broadcast bone positions."));
}

void ULiveDrummerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
    Super::NativeUpdateAnimation(DeltaTime);

    if (USkeletalMeshComponent *SkelMesh = GetSkelMeshComponent())
    {
        // 1. Get the Skeletal Mesh asset (USkeletalMesh)
        USkeletalMesh *ActualMesh = SkelMesh->GetSkeletalMeshAsset();
        if (!ActualMesh)
        {
            UE_LOG(LogTemp, Warning, TEXT("No SkeletalMesh Asset found in LiveDrummerAnimInstance."));
            return;
        }

        // 2. Grab the reference skeleton from the mesh
        const FReferenceSkeleton &RefSkel = ActualMesh->GetRefSkeleton();

        // 3. Number of bones
        const int32 BoneCount = SkelMesh->GetNumBones();

        // 4. Clear the stored transforms array
        BoneTransforms.Empty();
        BoneTransforms.Reserve(BoneCount);

        // 5. For each bone, compute local-space transform
        for (int32 i = 0; i < BoneCount; ++i)
        {
            FName BoneName = SkelMesh->GetBoneName(i);

            // (A) Child bone's transform in component space
            FTransform ChildCSTransform = SkelMesh->GetBoneTransform(i);

            // (B) Find parent index in the reference skeleton
            const int32 ParentIndex = RefSkel.GetParentIndex(i);

            // (C) Default local to the child’s component-space transform
            //     (useful if this bone is the root and has no parent)
            FTransform LocalBoneTransform = ChildCSTransform;

            // (D) If there's a valid parent, compute child's local-space transform
            if (ParentIndex != INDEX_NONE)
            {
                FTransform ParentCSTransform = SkelMesh->GetBoneTransform(ParentIndex);
                LocalBoneTransform = ChildCSTransform.GetRelativeTransform(ParentCSTransform);
            }

            // (E) Store or broadcast the local transform
            BoneTransforms.Add(LocalBoneTransform);

            BroadcastBoneTransform(BoneName, LocalBoneTransform);
        }
    }
}

void ULiveDrummerAnimInstance::BroadcastBoneTransform(FName BoneName, const FTransform &LocalTransform)
{
    // Extract local position, rotation, scale
    FVector LocalPos = LocalTransform.GetLocation();
    FQuat LocalRot = LocalTransform.GetRotation();
    FVector LocalScale = LocalTransform.GetScale3D();

    OnLiveBoneTransformUpdated.Broadcast(BoneName, LocalPos, LocalRot, LocalScale);
}