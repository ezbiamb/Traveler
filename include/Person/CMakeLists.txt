add_library(Person STATIC Person.cpp Person.h)
target_include_directories(Person PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
