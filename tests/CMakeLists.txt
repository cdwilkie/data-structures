cmake_minimum_required(VERSION 3.15)

project(TestsProject)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

set(TEST_SOURCES
	dustin_linked_lists_tests.cpp
	../src/dustin_linked_list.tpp
)

set(TEST_HEADER
	../include/dustin_linked_list.h
)
add_executable(tests_exec ${TEST_SOURCES})

target_include_directories(tests_exec PRIVATE ${TEST_HEADER})