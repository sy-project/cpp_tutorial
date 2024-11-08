cmake_minimum_required(VERSION 3.28.3)

project(ARGC)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB Project_src
    src/*.cpp
)

include_directories(./include)

add_executable(ARGC ${Project_src})

