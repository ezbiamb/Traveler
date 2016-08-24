add_executable(traveler main.cpp)
add_dependencies(traveler echo)
target_link_libraries(traveler LINK_PUBLIC ${libecho})
