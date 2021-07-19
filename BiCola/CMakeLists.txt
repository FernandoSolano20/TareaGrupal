cmake_minimum_required(VERSION 3.19)
project(BiCola)

set(CMAKE_CXX_STANDARD 14)

add_executable(BiCola main.cpp structures/List.cpp structures/List.h structures/Node.cpp structures/Node.h Controller/Controller.cpp Controller/Controller.h)