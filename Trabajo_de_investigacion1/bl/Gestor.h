//
// Created by lopez on 5/7/2021.
//

#ifndef GESTOR_H
#define GESTOR_H
#include "../bl/listaCircular/listaCircular.h"
#include "listaDobleEnlace/listaDobleEnlace.h"

class Gestor{
public:
    Gestor();
    /**
     * Funciones para listas circulares
     */
    void agregarCircular(ListaCircular lista, int valor);
    void buscarCircular(ListaCircular lista, int valor);
    void eliminarCircular(ListaCircular lista, int valor);
    void imprimirListaCircular(ListaCircular lista);
    /**
     * Funciones para listas doblemente enlazadas
     */
    void agregarDobleEnlace(ListaDobleEnlace lista, int valor);
    void buscarDobleEnlace(ListaDobleEnlace lista, int valor);
    void eliminarDobleEnlace(ListaDobleEnlace lista, int valor);
    void imprimirDobleEnlace(ListaDobleEnlace lista);
};


#endif //TRABAJO_DE_INVESTIGACION1_GESTOR_H
