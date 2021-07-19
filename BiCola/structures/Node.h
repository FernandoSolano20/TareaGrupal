//
// Created by fersolano on 7/18/2021.
//

#ifndef BICOLA_NODE_H
#define BICOLA_NODE_H


class Node {
public:
    Node();
    int getData();
    void setData(int data);
    Node* getNext();
    void setNext(Node*);
    Node* getPrev();
    void setPrev(Node*);

private:
    int data;
    Node* prev;
    Node* next;
};


#endif //BICOLA_NODE_H
