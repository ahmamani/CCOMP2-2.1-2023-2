#include <iostream>

using namespace std;

int main() {
    // Puntero: variable que almacena direcciones de memoria

    int x = 10;

    // Declaración: TIPO *NOMBRE_PUNTERO;
    int *ptr = &x;

    // OPERADORES:
    // Operador & (operador de dirección): nos sirve para extraer o conocer la dirección de memoria 
    //              de dicha variable u objeto.
    cout << &x << endl;    
    cout << ptr << endl;

    // Operador * (operador de indirección): nos sirve para extraer o conocer el CONTENIDO (valor) de la 
    //              dirección de memoria del puntero.
    cout << *ptr << endl;
    *ptr = 1000;
    cout << *ptr << endl;
    cout << x << endl;

    return 0;
}