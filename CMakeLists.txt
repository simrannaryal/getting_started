cmake_minimum_required(VERSION 3.10)
project(test)

set(CXX_STANDARD_REQUIRED true)
set(CXX_STANDARD 17)

add_library(carunit CarUnit.cpp)
add_library(func Functionalities.cpp)

add_executable(main Main.cpp)

target_link_libraries(main pthread carunit func)

