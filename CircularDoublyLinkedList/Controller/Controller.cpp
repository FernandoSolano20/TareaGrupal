//
// Created by fersolano on 7/18/2021.
//

#include "Controller.h"

Controller::Controller() {
    list = new List();
}

int Controller::getSize() {
    return list->getSize();
}

void Controller::showList() {
    list->showList();
}

void Controller::add(int data) {
    list->add(data);
}

void Controller::deleteElement(int data) {
    list->deleteElement(data);
}

int Controller::search(int data) {
    return list->search(data);
}