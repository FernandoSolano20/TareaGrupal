//
// Created by fersolano on 7/18/2021.
//

#ifndef BICOLA_CONTROLLER_H
#define BICOLA_CONTROLLER_H


#include "../structures/List.h"

class Controller {
public:
    Controller();
    void pushTop(int data);
    void pushBottom(int data);
    int popTop();
    int popBottom();
private:
    List* list;
};


#endif //BICOLA_CONTROLLER_H
