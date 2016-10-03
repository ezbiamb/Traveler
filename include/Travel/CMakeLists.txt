add_subdirectory(Connection)
add_library(Travel STATIC "Travel.cpp" Travel.h)
target_link_libraries(Travel LINK_PUBLIC Connection)
target_include_directories(Travel PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
