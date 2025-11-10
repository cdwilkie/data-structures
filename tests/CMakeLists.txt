cmake_minimum_required(VERSION 3.15)

project(TestsProject)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

set(TEST_SOURCES
	string_test.cpp
	../src/dustin_string.cpp
)

set(TEST_HEADER
	../include/dustin_string.h
)
add_executable(tests_exec ${TEST_SOURCES})

target_include_directories(tests_exec PRIVATE ${TEST_HEADER})