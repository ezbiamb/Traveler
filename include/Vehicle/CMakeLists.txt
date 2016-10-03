add_subdirectory(Car)
add_library(Vehicle STATIC "Vehicle.cpp" Vehicle.h)
target_include_directories(Vehicle PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
