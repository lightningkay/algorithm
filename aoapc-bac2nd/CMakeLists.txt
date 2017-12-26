cmake_minimum_required(VERSION 2.8)
project(algo)

set(CMAKE_CXX_STANDARD 11)
find_package(Boost REQUIRED)
find_library(BOOSTTEST_LIBRARY NAMES boost_unit_test_framework)

if(BOOSTTEST_LIBRARY)
    message(STATUS "found boost test")
endif()

message(${PROJECT_BINARY_DIR})


add_executable(chapter01 chapter01.cpp)
target_link_libraries(chapter01 boost_system boost_unit_test_framework)

add_executable(chapter02 chapter02.cpp)
target_link_libraries(chapter02 boost_system boost_unit_test_framework)

add_executable(chapter03 chapter03.cpp)
target_link_libraries(chapter03 boost_system boost_unit_test_framework)

add_executable(chapter04 chapter04.cpp)
target_link_libraries(chapter04 boost_system boost_unit_test_framework)

add_executable(chapter06 chapter06.cpp)
target_link_libraries(chapter06 boost_system boost_unit_test_framework)

add_executable(chapter07 chapter07.cpp)
target_link_libraries(chapter07 boost_system boost_unit_test_framework)
