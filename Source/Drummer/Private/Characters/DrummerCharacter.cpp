// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/DrummerCharacter.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Items/Weapons/Weapon.h"
#include "Items/Chair/Chair.h"
#include "Items/Item.h"

// #include "CommonTextBlock.h"

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
	// if (ActionState != EActionState::EAS_Unoccupied)
	// 	return;
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
		if (AWeapon *OverlappingWeapon = Cast<AWeapon>(OverlappingItem))
		{
			OverlappingWeapon->Equip(GetMesh(), FName("RightHandSocket"));
			CharacterState = ECharacterState::ECS_EquippedOneHandedWeapon;
		}
		else if (AChair *OverlappingChair = Cast<AChair>(OverlappingItem))
		{
			CharacterState = ECharacterState::ECS_Drumming;
		}
	}
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
		// EnhancedInputComponent->BindAction(PunchAction, ETriggerEvent::Triggered, this, &ADrummerCharacter::Punch);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &ADrummerCharacter::EKeyPressed);
	}
}
