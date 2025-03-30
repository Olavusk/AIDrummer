// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/Drummers/MIDIDrummerAnimInstance.h"
#include "Characters/Drummers/MIDIDrummer.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"

void UMIDIDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    // Attempt to find the associated MIDIDrummer actor
    MIDIDrummer = Cast<AMIDIDrummer>(TryGetPawnOwner());
}

void UMIDIDrummerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
    Super::NativeUpdateAnimation(DeltaTime);

    if (!MIDIDrummer)
    {
        MIDIDrummer = Cast<AMIDIDrummer>(TryGetPawnOwner());
    }

    // Only proceed if MIDIDrummer is valid
    if (MIDIDrummer)
    {
        // Update based on MIDI signals if applicable
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
                // Broadcast the bone position
                // UE_LOG(LogTemp, Log, TEXT("XABone %s Position: %s"), *BoneName.ToString(), *BonePosition.ToString());
                // BroadcastBonePosition(BoneName, BonePosition);
            }
        }
    }
}

void UMIDIDrummerAnimInstance::BroadcastBonePosition(FName BoneName, FVector Position)
{
    OnMIDIBonePositionUpdated.Broadcast(BoneName, Position);
}