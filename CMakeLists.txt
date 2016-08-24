cmake_minimum_required(VERSION 2.8)
project(traveler)

set(BINARY_DIR ${PROJECT_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${BINARY_DIR})

set(LIBRARY_DIR ${PROJECT_SOURCE_DIR}/lib)
set(LIBRARY_OUTPUT_PATH ${LIBRARY_DIR})

include_directories(include)
add_subdirectory(src)
add_subdirectory(include)
