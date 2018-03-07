#include <iostream>
#include "src/rectangle.h"
#include "src/simpleLogger.h"

using namespace std;


int main() {

    cout << "Hello, World!" << endl;

    rectangle rect;
    rect.set_values (3,4);
    LOG_INFO << "First area: " << rect.area();

    rectangle rect2(2,5);
    LOG_INFO << "Second area: " << rect2.area();

    LOG_INFO    << "You should now stop it";
    LOG_WARNING << "I'm warning you!";
    LOG_ERROR   << "you broke it!!";
    LOG_FATAL   << "AAAAAH!!!";
    LOG_INFO    << "...Just kidding";

    return 0;
}