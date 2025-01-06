// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "LiveDrummerAnimInstance.generated.h"

/**
 * Animation instance for LiveLink-controlled mesh
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLiveBonePositionUpdated, FName, BoneName, FVector, BonePosition);

UCLASS()
class DRUMMER_API ULiveDrummerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	// Overrides
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	// **Event to broadcast bone position updates**
	UPROPERTY(BlueprintAssignable, Category = "Animation")
	FOnLiveBonePositionUpdated OnLiveBonePositionUpdated;

private:
	// Store the transforms of all bones
	TArray<FTransform> BoneTransforms;

	// **Function to broadcast the position of a bone**
	void BroadcastBonePosition(FName BoneName, FVector Position);
};