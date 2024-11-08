cmake_minimum_required(VERSION 3.28.3)

project(Queue)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)

pkg_check_modules(deps REQUIRED IMPORTED_TARGET glib-2.0)

file(GLOB Project_src
    src/*.cpp
)

include_directories(./include)

add_executable(Queue ${Project_src})

target_link_libraries(Queue PkgConfig::deps)