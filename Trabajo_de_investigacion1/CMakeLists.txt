cmake_minimum_required(VERSION 3.19)
project(Trabajo_de_investigacion1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Trabajo_de_investigacion1 main.cpp bl/nodo/Nodo.h bl/nodo/Nodo.cpp bl/nodo/NodoDobleEnlace.h bl/nodo/NodoDobleEnlace.cpp bl/listaCircular/listaCircular.h bl/listaCircular/listaCircular.cpp bl/listaDobleEnlace/listaDobleEnlace.h bl/listaDobleEnlace/listaDobleEnlace.cpp bl/Gestor.h bl/Gestor.cpp ui/tl/Controller.h ui/tl/Controller.cpp ui/ui/Ui.h ui/ui/Ui.cpp)