#include "AnimationMidiProcessor.h"
#include <iostream>
#include <cmath>
#include <limits> // For INT_MAX

// Constructor: Opens the SQLite database
AnimationMidiProcessor::AnimationMidiProcessor(const std::string &dbPath)
    : db(nullptr)
{
    if (sqlite3_open(dbPath.c_str(), &db) != SQLITE_OK)
    {
        std::cerr << "Failed to open SQLite database: " << sqlite3_errmsg(db) << std::endl;
        db = nullptr;
    }
}

// Destructor: Closes the SQLite database
AnimationMidiProcessor::~AnimationMidiProcessor()
{
    if (db)
    {
        sqlite3_close(db);
    }
}

// Executes a query and prepares a statement
bool AnimationMidiProcessor::ExecuteQuery(const std::string &query, sqlite3_stmt *&stmt)
{
    if (sqlite3_prepare_v2(db, query.c_str(), -1, &stmt, nullptr) != SQLITE_OK)
    {
        std::cerr << "Failed to prepare query: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }
    return true;
}

// Loads animation data for a specific session
std::vector<BonePosition> AnimationMidiProcessor::LoadAnimationData(int sessionID)
{
    std::vector<BonePosition> animationData;
    sqlite3_stmt *stmt = nullptr;
    std::string query = "SELECT BoneName, BonePosition_X, BonePosition_Y, BonePosition_Z, FrameIndex "
                        "FROM AnimationData WHERE SessionID = " +
                        std::to_string(sessionID) + ";";

    if (ExecuteQuery(query, stmt))
    {
        while (sqlite3_step(stmt) == SQLITE_ROW)
        {
            BonePosition bone;
            bone.BoneName = reinterpret_cast<const char *>(sqlite3_column_text(stmt, 0));
            bone.X = static_cast<float>(sqlite3_column_double(stmt, 1));
            bone.Y = static_cast<float>(sqlite3_column_double(stmt, 2));
            bone.Z = static_cast<float>(sqlite3_column_double(stmt, 3));
            bone.FrameIndex = sqlite3_column_int(stmt, 4);
            animationData.push_back(bone);
        }
    }

    sqlite3_finalize(stmt);
    return animationData;
}

// Loads MIDI events for a specific session
std::vector<MIDIEvent> AnimationMidiProcessor::LoadMIDIEvents(int sessionID)
{
    std::vector<MIDIEvent> midiEvents;
    sqlite3_stmt *stmt = nullptr;
    std::string query = "SELECT FrameIndex, NoteID, EventType, Velocity "
                        "FROM MIDIEvents WHERE SessionID = " +
                        std::to_string(sessionID) + ";";

    if (ExecuteQuery(query, stmt))
    {
        while (sqlite3_step(stmt) == SQLITE_ROW)
        {
            MIDIEvent event;
            event.FrameIndex = sqlite3_column_int(stmt, 0);
            event.NoteID = sqlite3_column_int(stmt, 1);
            event.EventType = reinterpret_cast<const char *>(sqlite3_column_text(stmt, 2));
            event.Velocity = sqlite3_column_int(stmt, 3);
            midiEvents.push_back(event);
        }
    }

    sqlite3_finalize(stmt);
    return midiEvents;
}

// Preprocesses data for a specific session
void AnimationMidiProcessor::PreprocessSession(int sessionID)
{
    // Load data
    auto animationData = LoadAnimationData(sessionID);
    auto midiData = LoadMIDIEvents(sessionID);

    // Store in segments for later use
    animationSegments[sessionID] = animationData;
    midiSegments[sessionID] = midiData;

    // Align data (e.g., find matching FrameIndices)
    AlignSessionData(sessionID);

    std::cout << "Preprocessed session: " << sessionID << std::endl;
}

// Aligns animation and MIDI data by frame index
void AnimationMidiProcessor::AlignSessionData(int sessionID)
{
    auto &animData = animationSegments[sessionID];
    auto &midiData = midiSegments[sessionID];

    for (auto &midi : midiData)
    {
        int closestIndex = -1;
        int minDifference = std::numeric_limits<int>::max();

        for (size_t i = 0; i < animData.size(); ++i)
        {
            int difference = std::abs(animData[i].FrameIndex - midi.FrameIndex);
            if (difference < minDifference)
            {
                minDifference = difference;
                closestIndex = static_cast<int>(i);
            }
        }

        if (closestIndex >= 0)
        {
            std::cout << "Aligned MIDI frame " << midi.FrameIndex
                      << " with animation frame " << animData[closestIndex].FrameIndex << std::endl;
        }
    }
}

// Performs kNN analysis on session-level features
void AnimationMidiProcessor::PerformKNNAnalysis()
{
    for (const auto &[sessionID, animData] : animationSegments)
    {
        float avgX = 0, avgY = 0, avgZ = 0;
        for (const auto &bone : animData)
        {
            avgX += bone.X;
            avgY += bone.Y;
            avgZ += bone.Z;
        }
        avgX /= animData.size();
        avgY /= animData.size();
        avgZ /= animData.size();

        std::cout << "Session " << sessionID << ": Average Bone Position = ("
                  << avgX << ", " << avgY << ", " << avgZ << ")" << std::endl;
    }

    std::cout << "kNN analysis completed." << std::endl;
}