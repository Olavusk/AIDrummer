// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MIDIDrummerAnimInstance.generated.h"

/**
 * Animation instance for the MIDIDrummer
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMIDIBonePositionUpdated, FName, BoneName, FVector, BonePosition);

UCLASS()
class DRUMMER_API UMIDIDrummerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	// Overrides
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	// Reference to the MIDIDrummer
	UPROPERTY(BlueprintReadOnly)
	class AMIDIDrummer *MIDIDrummer;

	// Event for broadcasting bone position updates
	UPROPERTY(BlueprintAssignable, Category = "Animation")
	FOnMIDIBonePositionUpdated OnMIDIBonePositionUpdated;

private:
	// Track bone transforms
	TArray<FTransform> BoneTransforms;

	// Function to broadcast bone positions
	void BroadcastBonePosition(FName BoneName, FVector Position);
};
