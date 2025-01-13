// Fill out your copyright notice in the Description page of Project Settings.

#include "Midi/Drumset/KickDrumReceiver.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

void AKickDrumReceiver::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType)
{
    if (NoteID == 36)
    {
        if (KickSound)
        {
            // Spawn the sound and apply velocity as a parameter
            FAudioComponentParam VelocityParam;
            VelocityParam.ParamName = "Velocity";                             // This must match the parameter name in the Metasound
            VelocityParam.FloatParam = static_cast<float>(Velocity) / 127.0f; // Normalize velocity (0-127) to a 0-1 range

            UAudioComponent *AudioComponent = UGameplayStatics::SpawnSoundAtLocation(this, KickSound, GetActorLocation());
            if (AudioComponent)
            {
                AudioComponent->SetFloatParameter(VelocityParam.ParamName, VelocityParam.FloatParam);
            }
        }
        // Print "KICK" when NoteID is 36
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("KICK"));
            FString DebugMessage = FString::Printf(TEXT("KICK Velocity: %d"), Velocity);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, DebugMessage);
        }
    }
    else
    {
        // Do nothing
    }
}