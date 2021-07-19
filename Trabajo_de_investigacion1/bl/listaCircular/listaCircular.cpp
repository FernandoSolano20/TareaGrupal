//
// Created by lopez on 5/7/2021.
//

#include "listaCircular.h"
#include <iostream>
using namespace std;

/**
 * Constructor
 */
ListaCircular::ListaCircular() {
    setSize(0);
    setCabeza(nullptr);
}
/**
 * Destructor
 */
ListaCircular::~ListaCircular() {
}
/**
 * Get & sets
 */
Nodo *ListaCircular::getCabeza() const {
    return cabeza;
}

void ListaCircular::setCabeza(Nodo *cabeza) {
    ListaCircular::cabeza = cabeza;
}

int ListaCircular::getSize() const {
    return size;
}

void ListaCircular::setSize(int size) {
    ListaCircular::size = size;
}
/**
 * Metodos basicos
 */
//Agrega de forma ordenada los numeros
void ListaCircular::agregarListaCircular(int valor) {
    Nodo *nuevo;
    nuevo=new Nodo();
    nuevo->setInformacion(valor);

    if(cabeza== nullptr)
    {
        cabeza=nuevo;
        cabeza->setSiguiente(cabeza);
        final=nuevo;
        setSize(1);
    }
    else
    {
        nuevo->setSiguiente(cabeza);
        cabeza = nuevo;
        final->setSiguiente(cabeza);
        size = size+1;
    }
}

int ListaCircular::buscarListaCircular(int valor) {
    Nodo *aux;
    aux = cabeza;
    for(int pos=0; pos < getSize() ; pos++){
        if (aux->getInformacion() == valor){
            return pos;
        }else{
            aux = aux->getSiguiente();
        }
    }
    return -1;
}

void ListaCircular::eliminarListaCircular(int valor) {
    Nodo *aux, *prev;
    aux = cabeza;
    for(int pos=0; pos < size ; pos++){
        if (size == 1 && cabeza->getInformacion()==valor){
               cabeza = nullptr;
               final = nullptr;
            setSize(0);
        }if (aux->getInformacion() == valor){
            prev->setSiguiente(aux->getSiguiente());
            size = size -1;
        }else{
            prev = aux;
            aux = aux->getSiguiente();
        }
    }
}

void ListaCircular::imprimirListaC() {
    Nodo *aux = cabeza;
    if (size == 0){
     cout<<"La lista esta vacia"<< endl;
    } else {
        int i = 1;
        do {
            cout << "El dato en la posicion " << i << " es: " << aux->getInformacion() << endl;
            aux = aux->getSiguiente();
            i+=1;
        }
        while (aux != cabeza);
    }
}
