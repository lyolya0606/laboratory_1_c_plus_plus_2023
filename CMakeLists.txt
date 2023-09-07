cmake_minimum_required(VERSION 3.26)
project(laboratory_1_c__)

set(CMAKE_CXX_STANDARD 20)

add_executable(laboratory_1_c__ main.cpp
        greeting.cpp
        menu.cpp
        beginning.h
        checking_errors.cpp
        checking_errors.h
        substring_search.cpp
        substring_search.h
        file_errors.cpp
        file_errors.h
        input.cpp)
