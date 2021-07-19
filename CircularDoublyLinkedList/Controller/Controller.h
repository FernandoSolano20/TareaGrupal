//
// Created by fersolano on 7/18/2021.
//

#ifndef CIRCULARDOUBLYLINKEDLIST_CONTROLLER_H
#define CIRCULARDOUBLYLINKEDLIST_CONTROLLER_H


#include "../structures/List.h"

class Controller {
public:
    Controller();
    void add(int data);
    int search(int data);
    void deleteElement(int data);
    int getSize();
    void showList();
private:
    List* list;
};


#endif //CIRCULARDOUBLYLINKEDLIST_CONTROLLER_H
