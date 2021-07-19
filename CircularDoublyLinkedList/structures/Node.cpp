//
// Created by fersolano on 7/18/2021.
//

#include "Node.h"

Node::Node() {
    setData(0);
    setNext(nullptr);
    setPrev(nullptr);
}

void Node::setData(int data) {
    this->data = data;
}

int Node::getData() {
    return data;
}

void Node::setPrev(Node *prev) {
    this->prev = prev;
}

Node* Node::getPrev() {
    return prev;
}

void Node::setNext(Node *next) {
    this->next = next;
}

Node* Node::getNext() {
    return next;
}