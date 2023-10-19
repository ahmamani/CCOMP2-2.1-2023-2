#include <iostream>
#include "Punto.h"

using namespace std;

int main() {
    Punto p;
    p.setX(10);
    p.setY(20);

    p.print();

    // Crear un puntero de tipo Punto.
    Punto *ptr;
    // Hacer que dicho puntero apunte a p
    ptr = &p;
    // modificar los valores de 'x' y 'y' usando 
    //          el puntero
    ptr->setX(5);
    ptr->setY(4);
    // invocar a la función print usando el 
    //          puntero.
    ptr->print();

    return 0;
}