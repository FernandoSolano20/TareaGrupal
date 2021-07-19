//
// Created by lopez on 5/7/2021.
//

#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

#include "../nodo/Nodo.h"

class ListaCircular{
private:
    /**
     * Atributos
     */
    Nodo *cabeza;
    Nodo *final;
    int size;
public:
    /**
     * Constructor
     */
    ListaCircular();
    /**
     * Destructor
     */
    virtual ~ListaCircular();
    /**
     * Get & sets
     */
    Nodo *getCabeza() const;

    void setCabeza(Nodo *cabeza);

    int getSize() const;

    void setSize(int size);
    /**
     * Metodos basicos
     */
     void agregarListaCircular(int valor);
     int buscarListaCircular(int valor);
     void eliminarListaCircular(int valor);
     void imprimirListaC();
};

#endif //TRABAJO_DE_INVESTIGACION1_LISTACIRCULAR_H
