#include <iostream>
#include "Controller/Controller.h"

using namespace std;

int main() {
    Controller* controller = new Controller();

    for (int i = 0; i < 10; ++i) {
        controller->pushTop(i);
    }

    cout << "Lista 1" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << controller->popBottom() << endl;
    }

    for (int i = 0; i < 10; ++i) {
        controller->pushBottom(i);
    }

    cout << "Lista 2" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << controller->popTop() << endl;
    }
    return 0;
}
