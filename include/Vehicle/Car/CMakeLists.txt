add_library(Car STATIC "Car.cpp" Car.h)
target_link_libraries(Car LINK_PUBLIC Vehicle)
target_include_directories(Car PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
