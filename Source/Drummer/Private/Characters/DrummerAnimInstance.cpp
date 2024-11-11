// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/DrummerAnimInstance.h"
#include "Characters/DrummerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UDrummerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    DrummerCharacter = Cast<ADrummerCharacter>(TryGetPawnOwner());
    if (DrummerCharacter)
    {
        DrummerCharacterMovement = DrummerCharacter->GetCharacterMovement();
    }
}

void UDrummerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
    Super::NativeUpdateAnimation(DeltaTime);

    if (DrummerCharacterMovement)
    {
        // Update movement-related variables
        GroundSpeed = UKismetMathLibrary::VSizeXY(DrummerCharacterMovement->Velocity);
        IsFalling = DrummerCharacterMovement->IsFalling();
        CharacterState = DrummerCharacter->GetCharacterState();
    }
}
