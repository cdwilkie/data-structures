# Minimum CMake version required
cmake_minimum_required(VERSION 3.16)

# Project name and language
project(DataStructures
   VERSION 1.0
   DESCRIPTION "Custom C++ Data Structures Project"
   LANGUAGES CXX
)

# Specify the C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Define source and header directories
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

# Gather all source files (recursively)
file(GLOB_RECURSE SOURCES "${SRC_DIR}/*.cpp")

# Create the main executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Add include directory so headers can be found
target_include_directories(${PROJECT_NAME}
   PRIVATE
      ${INCLUDE_DIR}
)

# Print some info when building
message(STATUS "Building ${PROJECT_NAME} v${PROJECT_VERSION}")
message(STATUS "C++ Standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")