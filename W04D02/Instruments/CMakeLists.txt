cmake_minimum_required(VERSION 3.14)
project(Instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(Instruments main.cpp;Electric_Guitar.cpp;Bass_Guitar.cpp;Violin.cpp)