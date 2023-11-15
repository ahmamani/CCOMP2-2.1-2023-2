#include <iostream>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

int main () {
    Car c("VRS-234", 2024, "Bochito");
    Vehicle *ptr = &c;
    cout << ptr->getDesc() << endl;

    Vehicle &ref = c;
    cout << c.getDesc() << endl;

    return 0;
}