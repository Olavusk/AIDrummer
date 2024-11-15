// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Items/Weapons/Weapon.h"
#include "Items/Chair/Chair.h"
#include "Items/Item.h"
#include "Animation/AnimInstance.h"
#include "Components/BoxComponent.h"
#include "Characters/DrummerCharacter.h"

// Sets default values
ADrummerCharacter::ADrummerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringAtm"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 300.f;

	ViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ViewCamera"));
	ViewCamera->SetupAttachment(CameraBoom);
}

void ADrummerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController *PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem *Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DrummerContext, 0);

			UE_LOG(LogTemp, Warning, TEXT("DrummerContext mapping context added."));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to get EnhancedInputLocalPlayerSubsystem!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to get PlayerController!"));
	}
}

void ADrummerCharacter::Move(const FInputActionValue &Value)
{
	if (ActionState != EActionState::EAS_Unoccupied)
		return;
	// SIMPLE MOVEMENT
	const FVector2D MovementVector = Value.Get<FVector2D>();

	// ROTATOR CODE (Directional movement)
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, MovementVector.Y);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(RightDirection, MovementVector.X);
}

void ADrummerCharacter::Look(const FInputActionValue &Value)
{
	const FVector2D LookAxisVector = Value.Get<FVector2D>();

	AddControllerPitchInput(LookAxisVector.Y);
	AddControllerYawInput(LookAxisVector.X);
}

void ADrummerCharacter::EKeyPressed()
{
	if (OverlappingItem)
	{
		AWeapon *OverlappingWeapon = Cast<AWeapon>(OverlappingItem);
		if (OverlappingWeapon)
		{
			OverlappingWeapon->Equip(GetMesh(), FName("RightHandSocket"));
			CharacterState = ECharacterState::ECS_EquippedOneHandedWeapon;
			OverlappingItem = nullptr;
			EquippedWeapon = OverlappingWeapon;
		}

		ADrumstick *OverlappingDrumstick = Cast<ADrumstick>(OverlappingItem);
		if (OverlappingDrumstick)
		{
			OverlappingDrumstick->Equip(GetMesh(), FName("RightHandDrumstick"));
			CharacterState = ECharacterState::ECS_EquippedOneHandedWeapon;
			OverlappingItem = nullptr;
			EquippedDrumstick = OverlappingDrumstick;
		}
	}
	else
	{
		if (CanDisarm())
		{
			PlayEquipMontage(FName("Unequip"));
			CharacterState = ECharacterState::ECS_Unequipped;
			ActionState = EActionState::EAS_EquippingWeapon;
			UE_LOG(LogTemp, Warning, TEXT("CharacterState2: %d, ActionState: %d"), CharacterState, ActionState);
		}
		else if (CanArm())
		{
			PlayEquipMontage(FName("Equip"));
			CharacterState = ECharacterState::ECS_EquippedOneHandedWeapon;
			ActionState = EActionState::EAS_EquippingWeapon;
			UE_LOG(LogTemp, Warning, TEXT("CharacterState3: %d, ActionState: %d"), CharacterState, ActionState);
		}
	}
}

void ADrummerCharacter::Attack()
{
	if (CanAttack())
	{
		PlayAttackMontage();
		ActionState = EActionState::EAS_Attacking;
	}
}

bool ADrummerCharacter::CanAttack()
{
	return ActionState == EActionState::EAS_Unoccupied &&
		   CharacterState != ECharacterState::ECS_Unequipped;
}

bool ADrummerCharacter::CanDisarm()
{
	return ActionState == EActionState::EAS_Unoccupied &&
		   CharacterState != ECharacterState::ECS_Unequipped;
}

bool ADrummerCharacter::CanArm()
{
	return ActionState == EActionState::EAS_Unoccupied &&
		   CharacterState == ECharacterState::ECS_Unequipped &&
		   (EquippedWeapon || EquippedDrumstick);
}

void ADrummerCharacter::Disarm()
{
	if (EquippedWeapon)
	{
		EquippedWeapon->AttachMeshToSocket(GetMesh(), FName("SpineSocket"));
	}
}

void ADrummerCharacter::Arm()
{
	if (EquippedWeapon)
	{
		EquippedWeapon->AttachMeshToSocket(GetMesh(), FName("RightHandSocket"));
	}
}
void ADrummerCharacter::FinishEquipping()
{
	ActionState = EActionState::EAS_Unoccupied;
	UE_LOG(LogTemp, Warning, TEXT("Equip Montage Finished: CharacterState: %d, ActionState: %d"), CharacterState, ActionState);
}
void ADrummerCharacter::PlayAttackMontage()
{
	UAnimInstance *AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && AttackMontage)
	{
		AnimInstance->Montage_Play(AttackMontage);
		const int32 Selection = FMath::RandRange(0, 1);
		FName SectionName = FName();
		switch (Selection)
		{
		case 0:
			SectionName = FName("Attack1");
			break;
		case 1:
			SectionName = FName("Attack2");
			break;
		default:
			break;
		}
		AnimInstance->Montage_JumpToSection(SectionName, AttackMontage);
	}
}

void ADrummerCharacter::PlayEquipMontage(const FName &SectionName)
{
	UAnimInstance *AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && EquipMontage)
	{
		AnimInstance->Montage_Play(EquipMontage);
		AnimInstance->Montage_JumpToSection(SectionName, EquipMontage);
	}
}

void ADrummerCharacter::AttackEnd()
{
	ActionState = EActionState::EAS_Unoccupied;
}

void ADrummerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADrummerCharacter::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent *EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MovementAction, ETriggerEvent::Triggered, this, &ADrummerCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ADrummerCharacter::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ADrummerCharacter::Jump);
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Triggered, this, &ADrummerCharacter::Attack);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &ADrummerCharacter::EKeyPressed);
	}
}

void ADrummerCharacter::SetWeaponCollisionEnabled(ECollisionEnabled::Type CollisionEnabled)
{
	if (EquippedWeapon && EquippedWeapon->GetWeaponBox())
	{
		EquippedWeapon->GetWeaponBox()->SetCollisionEnabled(CollisionEnabled);
		EquippedWeapon->IgnoreActors.Empty();
	}
}
