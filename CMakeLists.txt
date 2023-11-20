cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Heros.cpp
        Heros.h
        Creature.cpp
        Creature.h
        Entité.cpp
        Entité.h
)
