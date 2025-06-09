cmake_minimum_required(VERSION 3.31)
project(BlankSlateSandbox)

set(CMAKE_CXX_STANDARD 23)

# Set output directories for all configurations:
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/BlankSlateSandbox/bin)

# Project Directories:
set(BLANKSLATE_SANDBOX_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/source)

# Add Executable:
add_executable(BlankSlateSandbox ${BLANKSLATE_SANDBOX_SOURCE_DIR}/SandboxApplication.cpp)

# Link to the library:
target_link_libraries(BlankSlateSandbox PRIVATE BlankSlateCore)

target_compile_definitions(BlankSlateSandbox PRIVATE BLANKSLATE_PLATFORM_WINDOWS)
