cmake_minimum_required(VERSION 3.19)
project(CircularDoublyLinkedList)

set(CMAKE_CXX_STANDARD 14)

add_executable(CircularDoublyLinkedList main.cpp structures/List.cpp structures/List.h structures/Node.cpp structures/Node.h Controller/Controller.cpp Controller/Controller.h)