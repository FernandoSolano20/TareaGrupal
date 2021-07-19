//
// Created by fersolano on 7/18/2021.
//

#ifndef CIRCULARDOUBLYLINKEDLIST_LIST_H
#define CIRCULARDOUBLYLINKEDLIST_LIST_H


#include "Node.h"

class List {
public:
    List();
    void add(int data);
    bool isEmpty();
    int search(int data);
    void deleteElement(int data);
    int getSize();
    void showList();
private:
    Node* getHead();
    void setHead(Node* head);
    void setSize(int num);
    Node* head;
    int size;
};


#endif //CIRCULARDOUBLYLINKEDLIST_LIST_H
