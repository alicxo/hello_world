cmake_minimum_required(VERSION 3.5)
project(demo)

add_compile_options(-std=c++14 -Wall -Werror -Wfatal-errors)

add_executable(demo demo.cc)

target_link_libraries(demo)

