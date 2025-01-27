#include "Midi/Drumset/SnareDrumReceiver.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

void ASnareDrumReceiver::OnMIDIEventReceived(int32 Channel, int32 NoteID, int32 Velocity, FString EventType)
{
    if (NoteID == 37)
    {
        // Print "SNARE" when NoteID is 37
        if (GEngine)
        {
            FString DebugMessage = FString::Printf(TEXT("SNARE Velocity: %d"), Velocity);
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, DebugMessage);
        }

        // Play the snare sound if it's assigned
        if (SnareSound)
        {
            // Spawn the sound and pass the velocity as a parameter
            FAudioParameter VelocityParam;
            VelocityParam.ParamName = "Velocity";                             // Must match the parameter name in the Metasound
            VelocityParam.FloatParam = static_cast<float>(Velocity) / 127.0f; // Normalize MIDI velocity (0-127) to 0-1 range

            UAudioComponent *AudioComponent = UGameplayStatics::SpawnSoundAtLocation(this, SnareSound, GetActorLocation());
            if (AudioComponent)
            {
                AudioComponent->SetFloatParameter(VelocityParam.ParamName, VelocityParam.FloatParam);
            }
        }
    }
    else
    {
        // Do nothing
    }
}