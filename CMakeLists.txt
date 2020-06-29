cmake_minimum_required(VERSION 3.5)
project(demo)

add_compile_options(-std=c++14 -Wall -Werror -Wfatal-errors)

add_executable(demo demo.cc person.cc)
target_link_libraries(demo)

add_executable(demo_unittest demo_unittest.cc person.cc)
target_link_libraries(demo_unittest gtest pthread)
