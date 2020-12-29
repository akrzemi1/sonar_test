project(sonar_test)
cmake_minimum_required(VERSION 2.6)
enable_testing()

set(CMAKE_CXX_FLAGS "-std=c++0x -Wall -Wextra ")

add_executable(sonar_test src/main.cpp)

add_test(sonar_test sonar_test)
