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
#include "Interfaces/MIDIEventReceiver.h"
#include "Animation/AnimInstance.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
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

	// Existing Input Mapping Logic
	if (APlayerController *PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem *Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DrummerContext, 0);
		}
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
		if (ADrumstick *OverlappingDrumstick = Cast<ADrumstick>(OverlappingItem))
		{
			if (!EquippedRightHandDrumstick) // Equip to the right hand first
			{
				OverlappingDrumstick->Equip(GetMesh(), FName("RightHandDrumstick"));
				EquippedRightHandDrumstick = OverlappingDrumstick;
				UE_LOG(LogTemp, Log, TEXT("Equipped drumstick in right hand."));
			}
			else if (!EquippedLeftHandDrumstick) // Equip to the left hand next
			{
				OverlappingDrumstick->Equip(GetMesh(), FName("LeftHandDrumstick"));
				EquippedLeftHandDrumstick = OverlappingDrumstick;
				UE_LOG(LogTemp, Log, TEXT("Equipped drumstick in left hand."));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Both hands are already equipped with drumsticks."));
			}

			OverlappingItem = nullptr; // Clear the overlap
			return;
		}

		if (AChair *OverlappingChair = Cast<AChair>(OverlappingItem))
		{
			EnterDrummingState(); // Ensure both hands have drumsticks
			return;
		}
	}

	// Default arm/disarm logic if no specific item is overlapping
	if (CanDisarm())
	{
		PlayEquipMontage(FName("Unequip"));
		CharacterState = ECharacterState::ECS_Unequipped;
		ActionState = EActionState::EAS_EquippingWeapon;
	}
	else if (CanArm())
	{
		PlayEquipMontage(FName("Equip"));
		CharacterState = ECharacterState::ECS_EquippedOneHandedWeapon;
		ActionState = EActionState::EAS_EquippingWeapon;
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
		   (EquippedWeapon || EquippedRightHandDrumstick || EquippedLeftHandDrumstick);
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

void ADrummerCharacter::EnterDrummingState()
{
	// Ensure right-hand drumstick is equipped
	if (!EquippedRightHandDrumstick)
	{
		UE_LOG(LogTemp, Warning, TEXT("Right hand missing a drumstick. Spawning one."));
		EquippedRightHandDrumstick = GetWorld()->SpawnActor<ADrumstick>(DrumstickClass);
		if (EquippedRightHandDrumstick)
		{
			EquippedRightHandDrumstick->Equip(GetMesh(), FName("RightHandDrumstick"));
		}
	}

	// Ensure left-hand drumstick is equipped
	if (!EquippedLeftHandDrumstick)
	{
		UE_LOG(LogTemp, Warning, TEXT("Left hand missing a drumstick. Spawning one."));
		EquippedLeftHandDrumstick = GetWorld()->SpawnActor<ADrumstick>(DrumstickClass);
		if (EquippedLeftHandDrumstick)
		{
			EquippedLeftHandDrumstick->Equip(GetMesh(), FName("LeftHandDrumstick"));
		}
	}

	// Update character state to Drumming
	CharacterState = ECharacterState::ECS_Drumming;
	UE_LOG(LogTemp, Log, TEXT("Entered Drumming State with both hands equipped."));

	// Ensure MIDIBroadcaster is valid
	if (MIDIBroadcaster)
	{
		MIDIBroadcaster->OnMIDINoteEvent.AddDynamic(this, &ADrummerCharacter::OnMIDIEventReceived);
		// Debug Message
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Bound to MIDIBroadcaster!"));
		}
	}
	else
	{
		// Debug Message
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MIDIBroadcaster not foundz!"));
		}
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

void ADrummerCharacter::EquipDrumsticks()
{
	// Equip or spawn and equip the right-hand drumstick
	if (!EquippedRightHandDrumstick)
	{
		UE_LOG(LogTemp, Warning, TEXT("Right-hand drumstick missing, spawning new one."));
		EquippedRightHandDrumstick = GetWorld()->SpawnActor<ADrumstick>(DrumstickClass);
		if (EquippedRightHandDrumstick)
		{
			EquippedRightHandDrumstick->Equip(GetMesh(), FName("RightHandDrumstick"));
		}
	}
	else
	{
		EquippedRightHandDrumstick->Equip(GetMesh(), FName("RightHandDrumstick"));
	}

	// Equip or spawn and equip the left-hand drumstick
	if (!EquippedLeftHandDrumstick)
	{
		UE_LOG(LogTemp, Warning, TEXT("Left-hand drumstick missing, spawning new one."));
		EquippedLeftHandDrumstick = GetWorld()->SpawnActor<ADrumstick>(DrumstickClass);
		if (EquippedLeftHandDrumstick)
		{
			EquippedLeftHandDrumstick->Equip(GetMesh(), FName("LeftHandDrumstick"));
		}
	}
	else
	{
		EquippedLeftHandDrumstick->Equip(GetMesh(), FName("LeftHandDrumstick"));
	}

	// Debug log to confirm both drumsticks are equipped
	if (EquippedRightHandDrumstick && EquippedLeftHandDrumstick)
	{
		UE_LOG(LogTemp, Log, TEXT("Both drumsticks are now equipped."));
	}
}
void ADrummerCharacter::PlaySimpleDrumMontage(const FName &SectionName)
{
	UAnimInstance *AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && SimpleDrumMontage)
	{
		AnimInstance->Montage_Play(SimpleDrumMontage);
		AnimInstance->Montage_JumpToSection(SectionName, SimpleDrumMontage);
	}
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

void ADrummerCharacter::HandleSimpleDrumMontage(int32 NoteID)
{
	FName SectionName;

	switch (NoteID)
	{
	case 36: // Kick Drum
		SectionName = FName("Kick_1");
		break;
	case 38: // Snare Drum
		SectionName = FName("SnareDrum_1");
		break;
	case 42: // Hi-Hat
		SectionName = FName("HiHat_1");
		break;
	default:
		UE_LOG(LogTemp, Log, TEXT("Unhandled NoteID: %d"), NoteID);
		return; // Exit if no matching NoteID
	}

	if (SimpleDrumMontage) // Fixed here
	{
		PlaySimpleDrumMontage(SectionName);
		UE_LOG(LogTemp, Log, TEXT("Playing section %s for NoteID %d."), *SectionName.ToString(), NoteID);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SimpleDrumMontage is not assigned."));
	}
}

void ADrummerCharacter::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, const FString EventType)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("MIDI Note Received: %d"), NoteID));
	}

	if (CharacterState == ECharacterState::ECS_Drumming)
	{
		HandleSimpleDrumMontage(NoteID);
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Character is not in Drumming State."));
		}
	}
}

void ADrummerCharacter::SetDrumstickCollisionEnabled(ECollisionEnabled::Type CollisionEnabled)
{
	// Handle Right Hand Drumstick
	if (EquippedRightHandDrumstick && EquippedRightHandDrumstick->GetDrumstickBox())
	{
		EquippedRightHandDrumstick->GetDrumstickBox()->SetCollisionEnabled(CollisionEnabled);
		EquippedRightHandDrumstick->IgnoreActors.Empty();
	}

	// Handle Left Hand Drumstick
	if (EquippedLeftHandDrumstick && EquippedLeftHandDrumstick->GetDrumstickBox())
	{
		EquippedLeftHandDrumstick->GetDrumstickBox()->SetCollisionEnabled(CollisionEnabled);
		EquippedLeftHandDrumstick->IgnoreActors.Empty();
	}
}
