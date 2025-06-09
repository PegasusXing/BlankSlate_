cmake_minimum_required(VERSION 3.31)
project(BlankSlateCore)

set(CMAKE_CXX_STANDARD 23)

# Set output directories for all configurations
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/BlankSlateCore/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/BlankSlateCore/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/BlankSlateCore/lib)

# Project Directories:
set(BLANKSLATE_CORE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/source)

# Add Library:
add_library(BlankSlateCore SHARED
        ${BLANKSLATE_CORE_SOURCE_DIR}/BlankSlate/Application.cpp
        ${BLANKSLATE_CORE_SOURCE_DIR}/BlankSlate/Application.h
        ${BLANKSLATE_CORE_SOURCE_DIR}/BlankSlate/Core.h
        ${BLANKSLATE_CORE_SOURCE_DIR}/BlankSlate/EntryPoint.h
        ${BLANKSLATE_CORE_SOURCE_DIR}/BlankSlate.h)

# Copy the DLL to the sandbox bin folder after building
add_custom_command(TARGET BlankSlateCore POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:BlankSlateCore>
        ${CMAKE_BINARY_DIR}/BlankSlateSandbox/bin/
)

target_include_directories(BlankSlateCore PUBLIC ${BLANKSLATE_CORE_SOURCE_DIR})

target_compile_definitions(BlankSlateCore PRIVATE BLANKSLATE_PLATFORM_WINDOWS BLANKSLATE_BUILD_DLL)
