cmake_minimum_required(VERSION 3.10.0)
project(
    Cnote 
    VERSION 0.1.0 
    LANGUAGES C
)

set(CMAKE_C_STANDARD 99)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/apps/)
add_subdirectory(first)
add_subdirectory(algo)
add_subdirectory(control)
