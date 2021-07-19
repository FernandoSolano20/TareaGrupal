//
// Created by lopez on 5/7/2021.
//

#ifndef LISTADOBLEENLACE_H
#define LISTADOBLEENLACE_H

#include "../nodo/NodoDobleEnlace.h"

class ListaDobleEnlace{
private:
    /**
     * Atributos
     */
     int size;
     NodoDobleEnlace *cabeza;
public:
    /**
     * Costructor
     */
    ListaDobleEnlace();
    /**
     * Destructor
     */
    virtual ~ListaDobleEnlace();
    /**
     * Get & sets
     */
    int getSize() const;

    void setSize(int size);

    NodoDobleEnlace *getCabeza() const;

    void setCabeza(NodoDobleEnlace *cabeza);
    /**
     * Metodos basicos
     */
     void agregarListaDobleEnlace(int valor);
     int buscarListaDobleEnlace(int valor);
     void eliminarListaDobleEnlace(int valor);
     void imprimirListaDE();
};

#endif //TRABAJO_DE_INVESTIGACION1_LISTADOBLEENLACE_H
