#include <iostream>
#include "src/rectangle.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    rectangle rect;
    rect.set_values (3,4);
    cout << "First area: " << rect.area() <<endl;

    rectangle rect2(2,5);
    cout << "Second area: " << rect2.area() << endl;


    return 0;
}