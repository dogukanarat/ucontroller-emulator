cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(emulator_project
    VERSION 0.1
    DESCRIPTION "Microcontroller emulator project" )

add_subdirectory(source)
add_subdirectory(test)
add_subdirectory(library)