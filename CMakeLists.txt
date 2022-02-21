cmake_minimum_required(VERSION 3.16)
project(Github_actions)

set(CMAKE_CXX_STANDARD 14)
set(input01 data/input.txt)

# Copy data files to build dir
foreach(file IN LISTS input01)
    configure_file(${file} ${file} COPYONLY)
endforeach()

add_executable(Github_actions main.cpp)