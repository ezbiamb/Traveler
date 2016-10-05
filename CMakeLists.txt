cmake_minimum_required(VERSION 3.1.0)
project(traveler)


set(BINARY_DIR ${PROJECT_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${BINARY_DIR})

set(LIBRARY_DIR ${PROJECT_SOURCE_DIR}/lib)
set(LIBRARY_OUTPUT_PATH ${LIBRARY_DIR})

add_subdirectory(src)
add_subdirectory(include)
add_subdirectory(test)

target_compile_features(traveler PRIVATE cxx_range_for)
