add_library(Place STATIC Place.cpp PlaceId.cpp Place.h PlaceId.h)
target_include_directories(Place PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
