add_executable(travelerTest mainTest.cpp)
target_link_libraries(travelerTest LINK_PUBLIC gtest)
target_link_libraries(travelerTest LINK_PUBLIC gtest_main)
#target_link_libraries(travelerTest  gtest)
