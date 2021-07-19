//
// Created by fersolano on 7/18/2021.
//

#include <cstddef>
#include "List.h"

List::List() {
    setHead(nullptr);
    setLast(nullptr);
    size = 0;
}

void List::pushTop(int data) {
    setSize(1);
    Node*aux = getHead();
    Node* temp = new Node();
    temp->setData(data);
    if (aux == nullptr) {
        setHead(temp);
        setLast(temp);
    } else{
        aux->setPrev(temp);
        temp->setNext(aux);
        temp->setPrev(nullptr);
        setHead(temp);
    }
}

void List::pushBottom(int data) {
    setSize(1);
    Node*aux = getLast();
    Node*head = getHead();
    Node* temp = new Node();
    temp->setData(data);
    if (head == nullptr) {
        setHead(temp);
        setLast(temp);
    } else{
        aux->setNext(temp);
        temp->setPrev(aux);
        temp->setNext(nullptr);
        setLast(temp);
    }
}

int List::popTop() {
    Node* aux = getHead();
    if (aux == nullptr) {
        return NULL;
    }
    setSize(-1);
    if(getSize() == 0) {
        setLast(nullptr);
    }
    int data = aux->getData();
    setHead(aux->getNext());
    return data;
}

int List::popBottom() {
    Node* aux = getLast();
    if (aux == nullptr) {
        return NULL;
    }
    setSize(-1);
    if(getSize() == 0) {
        setHead(nullptr);
    }
    int data = aux->getData();
    setLast(aux->getPrev());
    return data;
}

int List::getSize() {
    return size;
}

bool List::isEmpty() {
    if (getSize() == 0){
        return true;
    }
    return false;
}

Node* List::getHead() {
    return head;
}

Node* List::getLast() {
    return last;
}

void List::setHead(Node *head) {
    this->head = head;
}

void List::setLast(Node *last) {
    this->last = last;
}

void List::setSize(int num) {
    size = size + num;
}