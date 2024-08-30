// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Items/Weapons/Weapon.h"
#include "InputActionValue.h"
#include "CharacterTypes.h"
#include "DrummerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class AItem;

UCLASS()
class DRUMMER_API ADrummerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ADrummerCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;
	FORCEINLINE void SetOverlappingItem(AItem *Item) { OverlappingItem = Item; }
	FORCEINLINE ECharacterState GetCharacterState() const { return CharacterState; }

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputMappingContext *DrummerContext;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction *MovementAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction *LookAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction *JumpAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction *PunchAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction *InteractAction;

	void Move(const FInputActionValue &Value);
	void Look(const FInputActionValue &Value);
	void EKeyPressed();

private:
	ECharacterState CharacterState = ECharacterState::ECS_Unequipped;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent *CameraBoom;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent *ViewCamera;

	UPROPERTY(VisibleInstanceOnly)
	AItem *OverlappingItem;
};
