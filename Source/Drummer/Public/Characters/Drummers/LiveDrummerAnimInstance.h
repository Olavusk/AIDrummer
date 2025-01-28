// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "LiveDrummerAnimInstance.generated.h"

/**
 * Animation instance for LiveLink-controlled mesh
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(
	FOnLiveBoneTransformUpdated,
	FName, BoneName,
	FVector, LocalPosition,
	FQuat, LocalRotation,
	FVector, LocalScale);

UCLASS()
class DRUMMER_API ULiveDrummerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	// Overrides
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	// Broadcast full local transform
	UPROPERTY(BlueprintAssignable, Category = "Animation")
	FOnLiveBoneTransformUpdated OnLiveBoneTransformUpdated;

private:
	// Store the transforms of all bones
	TArray<FTransform> BoneTransforms;

	// **Function to broadcast the position of a bone**
	void BroadcastBoneTransform(FName BoneName, const FTransform &LocalTransform);
};