//
// Created by lopez on 5/7/2021.
//

#ifndef NODO_H
#define NODO_H
class Nodo{
private:
    /**
     * Atributos
     */
    int informacion;
    Nodo *siguiente;
public:
    /**
     * Constructor
     */
    Nodo();
    /**
     * get & sets
     */
    int getInformacion();
    void setInformacion(int info);
    Nodo *getSiguiente() const;
    void setSiguiente(Nodo *sig);
    /**
     * destructor.
     */
    virtual ~Nodo();
};

#endif //TRABAJO_DE_INVESTIGACION1_NODO_H
