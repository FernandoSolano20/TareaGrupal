//
// Created by lopez on 5/7/2021.
//

#include "Gestor.h"
#include <iostream>
using namespace std;


Gestor::Gestor() {}
/**
 * Funciones de listas circulares
 */

void Gestor::agregarCircular(ListaCircular lista, int valor) {
    try {
        lista.agregarListaCircular(valor);
        cout<< "¡Dato agregado con exito!"<< endl;
    }catch(...){
        cout << "Error al agregar el dato." << endl;
    }
}

void Gestor::buscarCircular(ListaCircular lista, int valor) {
    try {
        int posicion = lista.buscarListaCircular(valor);
        if (posicion < 0) {
            cout << "El valor no existe en la lista." << endl;
        } else {
            cout << "El valor se encuentra en la posicion: " + posicion << endl;
        }
    }catch (...){
        cout <<"Error buscando el numero.";
    }
}

void Gestor::eliminarCircular(ListaCircular lista, int valor) {
    try {
        if (lista.getSize()>0 && lista.buscarListaCircular(valor) < 0){
            lista.eliminarListaCircular(valor);
            cout<<"El valor fue elminado con exito"<< endl;
        }else{
            cout<<"La lista esta vacia o el valor no existe en la lista."<< endl;
        }
    }catch (...){
        cout<<"Error al eliminar el dato.";
    }
}


void Gestor::imprimirListaCircular(ListaCircular lista) {
    lista.imprimirListaC();
}

/**
 * Funciones de listas doblemente enlazadas.
 */

void Gestor::agregarDobleEnlace(ListaDobleEnlace lista, int valor) {
    lista.agregarListaDobleEnlace(valor);
}

void Gestor::buscarDobleEnlace(ListaDobleEnlace lista, int valor) {
    lista.buscarListaDobleEnlace(valor);
}

void Gestor::eliminarDobleEnlace(ListaDobleEnlace lista, int valor) {
    lista.eliminarListaDobleEnlace(valor);
}

void Gestor::imprimirDobleEnlace(ListaDobleEnlace lista) {
    lista.imprimirListaDE();
}
