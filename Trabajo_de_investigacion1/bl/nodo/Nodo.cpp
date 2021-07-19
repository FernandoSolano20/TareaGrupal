//
// Created by lopez on 5/7/2021.
//

#include "Nodo.h"
/**
 * Constructor
 */
Nodo::Nodo() {
    setInformacion(0);
    setSiguiente(nullptr);
}
/**
 * Get & sets
 */
void Nodo::setInformacion(int info) {
    Nodo::informacion = info;
}

Nodo *Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo *sig) {
    Nodo::siguiente = sig;
}

int Nodo::getInformacion() {
    return informacion;
}
/**
 * Destructor
 */

Nodo::~Nodo() {

}