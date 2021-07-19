//
// Created by lopez on 5/7/2021.
//
#include "listaDobleEnlace.h"
#include <iostream>
using namespace std;

/**
 * Constructor
 */
ListaDobleEnlace::ListaDobleEnlace() {
    setSize(0);
    setCabeza(nullptr);
}
/**
 * Destructor
 */
ListaDobleEnlace::~ListaDobleEnlace() {

}
/**
 * Get & sets
 */

int ListaDobleEnlace::getSize() const {
    return size;
}

void ListaDobleEnlace::setSize(int size) {
    ListaDobleEnlace::size = size;
}

NodoDobleEnlace *ListaDobleEnlace::getCabeza() const {
    return cabeza;
}

void ListaDobleEnlace::setCabeza(NodoDobleEnlace *cabeza) {
    ListaDobleEnlace::cabeza = cabeza;
}

/**
 * Metodos basicos.
 */
void ListaDobleEnlace::agregarListaDobleEnlace(int valor) {
    NodoDobleEnlace *nuevo;
    nuevo=new NodoDobleEnlace();
    nuevo->setInformacion(valor);

    if(cabeza== nullptr)
    {
        cabeza=nuevo;
        setSize(1);
    }
    else
    {
        cabeza->setAnterior(nuevo);
        nuevo->setSiguiente(cabeza);
        cabeza = nuevo;
        size = size+1;
    }
}

int ListaDobleEnlace::buscarListaDobleEnlace(int valor) {
    NodoDobleEnlace *aux;
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

void ListaDobleEnlace::eliminarListaDobleEnlace(int valor) {
    NodoDobleEnlace *aux, *prev;
    aux = cabeza;
    for(int pos=0; pos < size ; pos++){
        if (size == 1 && cabeza->getInformacion()==valor){
            cabeza = nullptr;
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

void ListaDobleEnlace::imprimirListaDE() {
    NodoDobleEnlace *aux = cabeza;
    if (size == 0){
        cout<<"La lista esta vacia"<< endl;
    } else {
        int i =1;
        while (aux != nullptr){
            cout << "El dato en la posicion " << i << " es: " << aux->getInformacion() << endl;
            aux = aux->getSiguiente();
            i+=1;
        }
    }
}