cmake_minimum_required(VERSION 3.16)
project(DataProcessing)

set(CMAKE_CXX_STANDARD 17)

# Add source files
file(GLOB_RECURSE SOURCES
    Private/*.cpp
)

# Add public headers
file(GLOB_RECURSE HEADERS
    Public/*.h
)

# Define executable
add_executable(DataProcessing ${SOURCES} ${HEADERS})

# Link SQLite library (adjust paths as needed)
find_package(SQLite3 REQUIRED)
target_include_directories(DataProcessing PRIVATE ${SQLite3_INCLUDE_DIRS})
target_link_libraries(DataProcessing PRIVATE ${SQLite3_LIBRARIES})