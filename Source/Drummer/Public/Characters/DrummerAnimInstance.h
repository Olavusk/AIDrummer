// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterTypes.h"
#include "DrummerAnimInstance.generated.h"

/**
 *
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBonePositionUpdated, FName, BoneName, FVector, BonePosition);
UCLASS()
class DRUMMER_API UDrummerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	class ADrummerCharacter *DrummerCharacter;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	class UCharacterMovementComponent *DrummerCharacterMovement;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float GroundSpeed;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool IsFalling;

	UPROPERTY(BlueprintReadOnly, Category = "Movement | Character State")
	ECharacterState CharacterState;

	UPROPERTY(BlueprintAssignable, Category = "Animation")
	FOnBonePositionUpdated OnBonePositionUpdated;

private:
	TArray<FTransform> BoneTransforms;
	void BroadcastBonePosition(FName BoneName, FVector Position);
};
