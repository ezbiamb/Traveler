add_executable(traveler main.cpp)
target_link_libraries(traveler LINK_PUBLIC echo)
target_link_libraries(traveler LINK_PUBLIC Person)
