//
// Created by lopez on 5/7/2021.
//

#include "NodoDobleEnlace.h"
/**
 * Constructor
 */
NodoDobleEnlace::NodoDobleEnlace() {
    setInformacion(0);
    setAnterior(nullptr);
    setSiguiente(nullptr);
}
/**
 * Destructor
 */
NodoDobleEnlace::~NodoDobleEnlace() {

}
/**
 * Get & sets
 */
int NodoDobleEnlace::getInformacion() const {
    return informacion;
}

void NodoDobleEnlace::setInformacion(int info) {
    NodoDobleEnlace::informacion = info;
}

NodoDobleEnlace *NodoDobleEnlace::getSiguiente() const {
    return siguiente;
}

void NodoDobleEnlace::setSiguiente(NodoDobleEnlace *siguiente) {
    NodoDobleEnlace::siguiente = siguiente;
}

NodoDobleEnlace *NodoDobleEnlace::getAnterior() const {
    return anterior;
}

void NodoDobleEnlace::setAnterior(NodoDobleEnlace *anterior) {
    NodoDobleEnlace::anterior = anterior;
}

