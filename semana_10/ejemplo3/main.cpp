#include <iostream>
#include "Point.h"
#include "GeometricVector.h"

using namespace std;

int main() {
    cout << "MAIN: inicio" << endl;
    Point p1(0, 0);
    Point p2(4, 3);
    GeometricVector vec(p1, p2);

    cout << vec.modulo() << endl;

    cout << "MAIN: termino" << endl;
    return 0;
}