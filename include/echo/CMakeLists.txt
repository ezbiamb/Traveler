add_library(echo STATIC echo.cpp echo.hpp)
target_include_directories(echo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
