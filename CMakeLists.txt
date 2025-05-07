cmake_minimum_required(VERSION 3.31)
project(add)

set(CMAKE_CXX_STANDARD 20)

add_executable(add main.cpp)

target_include_directories(add PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

