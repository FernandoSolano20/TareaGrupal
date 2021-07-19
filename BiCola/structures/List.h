//
// Created by fersolano on 7/18/2021.
//

#ifndef BICOLA_LIST_H
#define BICOLA_LIST_H


#include "Node.h"

class List {
public:
    List();
    void pushTop(int data);
    void pushBottom(int data);
    int popTop();
    int popBottom();
    bool isEmpty();
    int getSize();
private:
    Node* getHead();
    Node* getLast();
    void setHead(Node* head);
    void setLast(Node* head);
    void setSize(int num);
    Node* head;
    Node* last;
    int size;
};


#endif //BICOLA_LIST_H
