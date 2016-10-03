add_subdirectory(Road)
add_library(Section STATIC "Section.cpp" Section.h)
target_include_directories(Section PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
