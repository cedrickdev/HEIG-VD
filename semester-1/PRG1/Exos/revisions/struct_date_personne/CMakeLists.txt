cmake_minimum_required(VERSION 3.30)
project(struct_date_personne)

set(CMAKE_CXX_STANDARD 26)

add_executable(struct_date_personne main.cpp
        date.cpp
        personne.cpp)
