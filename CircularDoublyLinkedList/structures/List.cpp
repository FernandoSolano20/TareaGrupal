//
// Created by fersolano on 7/18/2021.
//

#include <cstddef>
#include <iostream>
#include "List.h"
#include <string>

using namespace std;

List::List() {
    head = nullptr;
    size = 0;
}

void List::add(int data) {
    Node* temp = new Node();
    setSize(1);
    temp->setData(data);
    if(getHead() == nullptr) {
        setHead(temp);
    } else{
        Node* head = getHead();
        Node* lastNode = head->getPrev();
        if(lastNode == nullptr) {
            head->setPrev(temp);
            head->setNext(temp);
            temp->setNext(head);
            temp->setPrev(head);
        } else {
            lastNode->setNext(temp);
            temp->setPrev(lastNode);
            temp->setNext(head);
            head->setPrev(temp);
        }
    }
}

bool List::isEmpty() {
    if (getSize() == 0){
        return true;
    }
    return false;
}

int List::search(int data) {
    Node* aux = head;
    int size = 0;
    if(aux == nullptr){
        return NULL;
    }
    while (size != getSize()){
        if(aux->getData() == data) {
            return data;
        }
        aux = aux->getNext();
        size++;
    }
    return NULL;
}

void List::deleteElement(int data) {
    Node* aux = getHead();
    int size = 0;
    if(aux == nullptr){
        return;
    }
    while (size != getSize()){
        if(aux->getData() == data) {
            setSize(-1);
            Node* prev = aux->getPrev();
            Node* next = aux->getNext();
            if(prev == nullptr && next == nullptr){
                setHead(nullptr);
            } else {
                aux->setPrev(nullptr);
                aux->setNext(nullptr);
                prev->setNext(next);
                next->setPrev(prev);
            }
            return;
        }
        aux = aux->getNext();
        size++;
    }
}

int List::getSize() {
    return size;
}

void List::showList() {
    Node* aux = getHead();
    int size = 0;
    cout << "<<----------------------List----------------->>\n\n";
    while (size != getSize()) {
        cout << "Prev: " + to_string(aux->getPrev()->getData()) << endl;
        cout << "Data: " + to_string(aux->getData()) << endl;
        cout << "Next: " + to_string(aux->getNext()->getData()) << endl;
        cout << "-----------------------------------------------\n\n";

        aux = aux->getNext();
        size++;
    }
}

Node* List::getHead() {
    return head;
}

void List::setHead(Node *head) {
    this->head = head;
}

void List::setSize(int num) {
    size = size + num;
}