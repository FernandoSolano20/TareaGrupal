//
// Created by lopez on 5/7/2021.
//

#include "Controller.h"
#include <iostream>
using namespace std;

void Controller::evaluarSeleccion(int valor, ListaCircular listaCircular, ListaDobleEnlace listaDobleEnlace) {
    int* dato;
    dato = 0;
    switch (valor) {
        case 1:
            cout<< "Digite el valor que desea agregar a la lista circular: \n";
            cin >> *dato;
            gestor.agregarCircular(listaCircular, *dato);
            break;
        case 2:
            cout<< "Digite el valor que desea buscar en la lista circular: \n";
            cin >> *dato;
            gestor.buscarCircular(listaCircular, *dato);
            break;
        case 3:
            cout<< "Digite el valor que desea eliminar de la lista circular: \n";
            cin >> *dato;
            gestor.eliminarCircular(listaCircular,*dato);
            break;
        case 4:
            gestor.imprimirListaCircular(listaCircular);
            break;
        case 5:
            cout<< "Digite el valor que desea agregar a la lista con doble enlace: \n";
            cin >> *dato;
            gestor.agregarDobleEnlace(listaDobleEnlace, *dato);
            break;
        case 6:
            cout<< "Digite el valor que desea buscar en la lista con doble enlace: \n";
            cin >> *dato;
            gestor.buscarDobleEnlace(listaDobleEnlace, *dato);
            break;
        case 7:
            cout<< "Digite el valor que desea eliminar de la lista con doble enlace: \n";
            cin >> *dato;
            gestor.eliminarDobleEnlace(listaDobleEnlace,*dato);
            break;
        case 8:
            gestor.imprimirDobleEnlace(listaDobleEnlace);
            break;
        case 9:
            cout<< "Gracias, hasta pronto\n";
            exit(0);
            break;
        default:
            cout << "Valor invalido. Debe seleccionar uno de los valores indicados en el menu.";
            break;
    }
}

