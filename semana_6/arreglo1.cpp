#include <iostream>

using namespace std;

int main() {
    // declarando un arreglo de enteros de 5 elementos
    int array[5];

    // inicializando los elementos del arreglo
    array[0] = 5;
    array[1] = 4;
    array[2] = 6;
    array[3] = 7;
    array[4] = 15;

    // imprimiendo los valores de los elementos de un arreglo
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl;

    // declarando e inicializando un nuevo arreglo
    int array2[4] = {5, 6, 9, 11};
    // imprimiendo los valores de los elementos de un arreglo
    cout << array2[0] << endl;
    cout << array2[1] << endl;
    cout << array2[2] << endl;
    cout << array2[3] << endl;
    

    return 0;
}