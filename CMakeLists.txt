cmake_minimum_required(VERSION 3.31)
project(BlankSlate_)

set(CMAKE_CXX_STANDARD 23)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libgcc -static-libstdc++ -static")

# Add subdirectories
add_subdirectory(BlankSlateCore)
add_subdirectory(BlankSlateSandbox)