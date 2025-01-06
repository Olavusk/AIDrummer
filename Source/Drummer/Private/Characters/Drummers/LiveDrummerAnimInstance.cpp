// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/Drummers/LiveDrummerAnimInstance.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"

void ULiveDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    // You could add initialization logic here if necessary
    UE_LOG(LogTemp, Log, TEXT("LiveDrummerAnimInstance: Initialized and ready to broadcast bone positions."));
}

void ULiveDrummerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
    Super::NativeUpdateAnimation(DeltaTime);

    // **Get the Skeletal Mesh that this animation is controlling**
    if (USkeletalMeshComponent *SkelMesh = GetSkelMeshComponent())
    {
        // Clear previous frame's bone transform data
        BoneTransforms.Empty();

        int32 BoneCount = SkelMesh->GetNumBones();
        for (int32 i = 0; i < BoneCount; ++i)
        {
            FName BoneName = SkelMesh->GetBoneName(i);
            FTransform BoneTransform = SkelMesh->GetBoneTransform(i);
            BoneTransforms.Add(BoneTransform);

            FVector BonePosition = BoneTransform.GetLocation();
            // **Broadcast the bone position to listeners**
            BroadcastBonePosition(BoneName, BonePosition);

            // Optional debug log (comment this out for performance)
            // UE_LOG(LogTemp, Log, TEXT("LiveBone %s Position: %s"), *BoneName.ToString(), *BonePosition.ToString());
        }
    }
}

void ULiveDrummerAnimInstance::BroadcastBonePosition(FName BoneName, FVector Position)
{
    // **Broadcast position change to listeners**
    OnLiveBonePositionUpdated.Broadcast(BoneName, Position);
}