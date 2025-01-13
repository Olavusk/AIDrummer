#include "AnimationMidiProcessor.h"
#include <iostream>
#include <string>

int main()
{
    // Hardcoded path to the SQLite database
    std::string dbPath = "../Content/Database/drummer_data.db";

    // Print the database path for confirmation
    std::cout << "Using database at: " << dbPath << std::endl;

    // Create an instance of AnimationMidiProcessor
    AnimationMidiProcessor processor(dbPath);

    // Define the session IDs to preprocess
    std::vector<int> sessionIDs = {1, 2, 3}; // Example session IDs, modify as needed

    // Preprocess each session
    for (int sessionID : sessionIDs)
    {
        std::cout << "Processing session: " << sessionID << std::endl;
        processor.PreprocessSession(sessionID);
    }

    // Perform kNN analysis on the preprocessed data
    std::cout << "Performing kNN analysis..." << std::endl;
    processor.PerformKNNAnalysis();

    std::cout << "Data processing completed." << std::endl;

    return 0;
}