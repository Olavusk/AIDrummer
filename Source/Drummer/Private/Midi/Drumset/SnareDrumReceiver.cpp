// Fill out your copyright notice in the Description page of Project Settings.

#include "Midi/Drumset/SnareDrumReceiver.h"

void ASnareDrumReceiver::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType)
{
    if (NoteID == 37)
    {
        // Print "SNARE" when NoteID is 37
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("SNARE"));
        }
    }
    else
    {
        // Do nothing
    }
}