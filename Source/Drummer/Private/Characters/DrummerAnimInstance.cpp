// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/DrummerAnimInstance.h"
#include "Characters/DrummerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    DrummerCharacter = Cast<ADrummerCharacter>(TryGetPawnOwner());
    if (DrummerCharacter)
    {
        DrummerCharacterMovement = DrummerCharacter->GetCharacterMovement();
    }
}

void UDrummerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
    Super::NativeUpdateAnimation(DeltaTime);

    if (DrummerCharacterMovement)
    {
        // Update movement-related variables
        GroundSpeed = UKismetMathLibrary::VSizeXY(DrummerCharacterMovement->Velocity);
        IsFalling = DrummerCharacterMovement->IsFalling();
        CharacterState = DrummerCharacter->GetCharacterState();
    }
    // Capture and log skeletal bone positions
    // Capture and log skeletal bone positions
    if (USkeletalMeshComponent *SkelMesh = GetSkelMeshComponent())
    {
        BoneTransforms.Empty(); // Clear previous frame data

        int32 BoneCount = SkelMesh->GetNumBones();
        for (int32 i = 0; i < BoneCount; ++i)
        {
            FName BoneName = SkelMesh->GetBoneName(i);
            FTransform BoneTransform = SkelMesh->GetBoneTransform(i);
            BoneTransforms.Add(BoneTransform);

            FVector BonePosition = BoneTransform.GetLocation();
            UE_LOG(LogTemp, Log, TEXT("Bone %s Position: %s"), *BoneName.ToString(), *BonePosition.ToString());

            // If you wish to broadcast, implement BroadcastBonePosition, otherwise comment this line
            BroadcastBonePosition(BoneName, BonePosition); // hypothetical function
        }
    }
}

void UDrummerAnimInstance::BroadcastBonePosition(FName BoneName, FVector Position)
{
    OnBonePositionUpdated.Broadcast(BoneName, Position);
}
