#include <iostream>
#include "ui/ui/Ui.h"

using  namespace std;

int main() {
    Ui ui;
    //Controller controller;
    Gestor gestor;
    ListaCircular *listaCircular;
    listaCircular = new ListaCircular();
    ListaDobleEnlace *listaDobleEnlace;
    listaDobleEnlace = new ListaDobleEnlace();
    cout << "Se procedera a agregar el numero del 1 al 10 en la lista circular y la lista doblemente enlazada."<<endl;
    for (int i = 1; i < 11; ++i) {
        listaCircular->agregarListaCircular(i);
        listaDobleEnlace->agregarListaDobleEnlace(i);
    }
    cout << "Se imprimen los datos de la lista Circular."<<endl;
    listaCircular->imprimirListaC();
    cout << "Se imprimen los datos de la lista Doblemente Enlazada."<<endl;
    listaDobleEnlace->imprimirListaDE();
    cout << "Se procede a buscar el numero 5 en la lista circular, este se cuentra en la posicion: "<<endl <<listaCircular->buscarListaCircular(5)<<endl;
    cout << "Se procede a buscar el numero 6 en la lista de doble enlace, este se cuentra en la posicion: "<<endl <<listaDobleEnlace->buscarListaDobleEnlace(6)<<endl;
    cout << "Se procede a eliminar el numero 5 en la lista circular se imprimen los valores de la lista: "<<endl;
    listaCircular->eliminarListaCircular(5);
    listaCircular->imprimirListaC();
    cout << "Se procede a eliminar el numero 6 en la lista Doble enlace se imprimen los valores de la lista: "<<endl;
    listaDobleEnlace->eliminarListaDobleEnlace(5);
    listaDobleEnlace->imprimirListaDE();


    return 0;
}
