// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/Drummers/DatabaseDrummerAnimInstance.h"
#include "Characters/Drummers/DatabaseDrummer.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SkeletalMeshComponent.h"

void UDatabaseDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();
    CurrentFrameIndex = 0;
    FrameTimeAccumulator = 0.0f;
    DatabaseDrummer = Cast<ADatabaseDrummer>(TryGetPawnOwner());
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

    FrameTimeAccumulator += DeltaTime;
    float FrameDuration = 1.0f / 30.0f; // Assuming 30 FPS

    if (FrameTimeAccumulator >= FrameDuration)
    {
        FrameTimeAccumulator = 0.0f;

        do
        {
            CurrentFrameIndex++;
            if (CurrentFrameIndex > DatabaseDrummer->GetAnimationFrames().Num())
            {
                CurrentFrameIndex = DatabaseDrummer->GetAnimationFrames().CreateConstIterator().Key();
            }
        } while (!DatabaseDrummer->GetAnimationFrames().Contains(CurrentFrameIndex));

        if (DatabaseDrummer->GetAnimationFrames().Contains(CurrentFrameIndex))
        {
            ApplyFrameData(DatabaseDrummer->GetAnimationFrames().FindChecked(CurrentFrameIndex), CurrentFrameIndex);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Frame index %d not found in AnimationFrames"), CurrentFrameIndex);
        }
    }
}

void UDatabaseDrummerAnimInstance::ApplyFrameData(const TMap<FName, FVector> &BoneData, int32 FrameIndex)
{
    BoneTransformData = BoneData; // Store bone data for the anim node

    if (USkeletalMeshComponent *SkelMesh = GetSkelMeshComponent())
    {
        if (SkelMesh->GetNumBones() == 0 || !SkelMesh->GetSkinnedAsset())
        {
            UE_LOG(LogTemp, Error, TEXT("Skeletal mesh has no bones or is not set."));
            return;
        }

        UE_LOG(LogTemp, Log, TEXT("Applying frame %d with %d bones."), FrameIndex, BoneData.Num());

        for (const auto &Bone : BoneData)
        {
            int32 BoneIndex = SkelMesh->GetBoneIndex(Bone.Key);
            if (BoneIndex != INDEX_NONE)
            {
                FVector NewPosition = Bone.Value;
                SkelMesh->GetEditableComponentSpaceTransforms()[BoneIndex].SetTranslation(NewPosition);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Bone %s not found!"), *Bone.Key.ToString());
            }
        }
        SkelMesh->RefreshBoneTransforms();
    }
}
