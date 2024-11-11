// Fill out your copyright notice in the Description page of Project Settings.

#include "Midi/Drumset/KickDrumReceiver.h"

void AKickDrumReceiver::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType)
{
    if (NoteID == 36)
    {
        // Print "KICK" when NoteID is 36
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("KICK"));
        }
    }
    else
    {
        // Do nothing
    }
}