//
// Created by fersolano on 7/18/2021.
//

#include "Controller.h"

Controller::Controller() {
    list = new List();
}

int Controller::popTop() {
    return list->popTop();
}

void Controller::pushBottom(int data) {
    return list->pushBottom(data);
}

int Controller::popBottom() {
    return list->popBottom();
}

void Controller::pushTop(int data) {
    list->pushTop(data);
}