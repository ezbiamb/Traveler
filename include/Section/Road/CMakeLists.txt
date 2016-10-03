add_library(Road STATIC "Road.cpp" Road.h)
target_link_libraries(Road LINK_PUBLIC Section) 
target_include_directories(Road PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
