cmake_minimum_required(VERSION 3.14)
project(GFO)

set(CMAKE_CXX_STANDARD 14)

add_executable(GFO main.cpp;Person.cpp;Student.cpp;Mentor.cpp;Sponsor.cpp;Cohort.cpp)