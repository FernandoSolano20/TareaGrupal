//
// Created by lopez on 5/7/2021.
//

#ifndef NODODOBLEENLACE_H
#define NODODOBLEENLACE_H
class NodoDobleEnlace{
private:
    /**
     * Atributos
     */
    int informacion;
    NodoDobleEnlace *siguiente;
    NodoDobleEnlace *anterior;
public:
    /**
     * Constructor
     */
    NodoDobleEnlace();

    /**
     * Get & sets
     */
    int getInformacion() const;

    void setInformacion(int info);

    NodoDobleEnlace *getSiguiente() const;

    void setSiguiente(NodoDobleEnlace *siguiente);

    NodoDobleEnlace *getAnterior() const;

    void setAnterior(NodoDobleEnlace *anterior);

    /**
     * Destructor
     */
    virtual ~NodoDobleEnlace();
};

#endif //TRABAJO_DE_INVESTIGACION1_NODODOBLEENLACE_H
