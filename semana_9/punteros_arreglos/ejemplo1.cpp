#include <iostream>

using namespace std;

int main() {
    // PUNTEROS Y ARREGLOS
    int arr[] = {15, 24, 30, 41, 55, 66};
    int tam = sizeof(arr) / sizeof(arr[0]);
    
    int *ptr = arr;

    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr--;
    cout << *ptr << endl;





/*
    cout << *(ptr + 0) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;

    cout << *(ptr + 5) << endl;
    cout << *(ptr + tam - 1) << endl;

    // imprimir los elementos del arreglo usando el puntero ptr
    for (int i = 0; i < tam; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    for (int i = tam - 1; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }*/
    
    return 0;
}






/*




    // el nombre del arreglo es un puntero (CONSTANTE) al primer elemento del arreglo
    cout << arr << endl;
    cout << &arr[0] << endl;

    int *ptr = arr;

    cout << *(ptr + 0) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + tam - 1) << endl;

    for (int i = 0; i < tam; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    
    

    return 0;
}*/