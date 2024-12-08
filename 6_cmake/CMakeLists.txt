cmake_minimum_required(VERSION 3.15)

project(cmaketest CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)


include_directories(headers)


add_executable(test_exc main.cpp utils.cpp)
add_executable(other_main other_main.cpp)

qt_add_executable(qt qt.cpp main.cpp)

target_link_libraries(qt PRIVATE Qt6::Widgets)
