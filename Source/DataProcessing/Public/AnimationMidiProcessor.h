#pragma once

#include <vector>
#include <string>
#include <unordered_map>
#include <sqlite3.h>

// Structure to represent a bone position in animation data
struct BonePosition
{
    std::string BoneName; // Name of the bone
    float X, Y, Z;        // 3D Position
    int FrameIndex;       // Frame index
};

// Structure to represent a MIDI event
struct MIDIEvent
{
    int FrameIndex;        // Frame index
    int NoteID;            // MIDI Note ID
    std::string EventType; // Event type (e.g., "Note On", "Note Off")
    int Velocity;          // Velocity of the note
};

class AnimationMidiProcessor
{
public:
    // Constructor to initialize the processor with a database path
    AnimationMidiProcessor(const std::string &dbPath);

    // Destructor to clean up resources
    ~AnimationMidiProcessor();

    // Preprocess and align data for a session
    void PreprocessSession(int sessionID);

    // Perform kNN analysis on session-level features
    void PerformKNNAnalysis();

private:
    sqlite3 *db;

    // Helper methods
    bool ExecuteQuery(const std::string &query, sqlite3_stmt *&stmt);

    std::vector<BonePosition> LoadAnimationData(int sessionID);
    std::vector<MIDIEvent> LoadMIDIEvents(int sessionID);
    void AlignSessionData(int sessionID);

    // Data structures for preprocessed data
    std::unordered_map<int, std::vector<BonePosition>> animationSegments;
    std::unordered_map<int, std::vector<MIDIEvent>> midiSegments;
};