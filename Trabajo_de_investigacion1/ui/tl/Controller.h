//
// Created by lopez on 5/7/2021.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../../bl/listaCircular/listaCircular.h"
#include "../../bl/listaDobleEnlace/listaDobleEnlace.h"
#include "../../bl/Gestor.h"

class Controller{
private:
    Gestor gestor;
public:
    /**
 * Funciones para listas circulares
 */
    ListaCircular* crearListaCircular();
    void agregarCircular(ListaCircular lista, int valor);
    void buscarCircular(ListaCircular lista, int valor);
    void eliminarCircular(ListaCircular lista, int valor);
    void imprimirCircular(ListaCircular lista);
    /**
     * Funciones para listas doblemente enlazadas
     */
    ListaDobleEnlace* crearListaDobleEnlace();
    void agregarDobleEnlace(ListaDobleEnlace lista, int valor);
    void buscarDobleEnlace(ListaDobleEnlace lista, int valor);
    void eliminarDobleEnlace(ListaDobleEnlace valor);
    void imprimirDobleEnlace(ListaDobleEnlace lista);
    /**
     * Funciones para menu
     */
     void evaluarSeleccion(int valor, ListaCircular listaCircular, ListaDobleEnlace listaDobleEnlace);
};
#endif //TRABAJO_DE_INVESTIGACION1_CONTROLLER_H
