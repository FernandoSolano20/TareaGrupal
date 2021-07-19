
#include <iostream>
#include <string>
#include "Controller/Controller.h"

using namespace std;

int main() {
    Controller* controller = new Controller();

    for (int i = 0; i < 10; ++i) {
        controller->add(i);
    }
    controller->showList();
    controller->deleteElement(6);
    controller->showList();
    controller->add(10);
    controller->showList();
    cout << "Elemento: " + to_string(controller->search(8));
    return 0;
}
