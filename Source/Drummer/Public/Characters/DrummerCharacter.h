// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Items/Weapons/Weapon.h"
#include "Items/Drumsticks/Drumstick.h"
#include "InputActionValue.h"
#include "CharacterTypes.h"
#include "DrummerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class AItem;
class UAnimMontage;
class AWeapon;
class ADrumstick;

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

	UFUNCTION(BlueprintCallable)
	void SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled);

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
	UInputAction *AttackAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction *InteractAction;

	/**
	 * Callbacks for input
	 */
	void Move(const FInputActionValue &Value);
	void Look(const FInputActionValue &Value);
	void EKeyPressed();
	void Attack();

	/**
	 * Play montage functions
	 */
	void PlayAttackMontage();

	UFUNCTION(BlueprintCallable)
	void AttackEnd();
	bool CanAttack();

	void PlayEquipMontage(const FName &SectionName);
	bool CanDisarm();
	bool CanArm();

	UFUNCTION(BlueprintCallable)
	void Disarm();

	UFUNCTION(BlueprintCallable)
	void Arm();

	UFUNCTION(BlueprintCallable)
	void FinishEquipping();

private:
	ECharacterState CharacterState = ECharacterState::ECS_Unequipped;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EActionState ActionState = EActionState::EAS_Unoccupied;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent *CameraBoom;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent *ViewCamera;

	UPROPERTY(VisibleInstanceOnly)
	AItem *OverlappingItem;

	UPROPERTY(VisibleAnywhere, Category = Weapon)
	AWeapon *EquippedWeapon;
	UPROPERTY(VisibleAnywhere, Category = Drumstick)
	ADrumstick *EquippedDrumstick;

	/**
	 * Animation montages
	 */

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage *AttackMontage;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage *EquipMontage;
};
