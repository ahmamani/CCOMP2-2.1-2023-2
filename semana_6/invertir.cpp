/**
 * Implemente una función que reciba un arreglo de enteros
 * y una variable int que representa su tamaño e invierta 
 * los elementos de dicho arreglo
 * 
 *      void invertir(int arr[], const int tam)
*/
#include <iostream>

using namespace std;

void imprimir(const int arr[], const int tam) {
    cout << "Los elementos del arreglo son: [";
    for (int i = 0; i < tam; i++) {
        cout << " " << arr[i];
    }
    cout << " ]" << endl;
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir(int arr[], const int tam){
    for (int i = 0; i < tam/2; i++) {
        intercambio(arr[i], arr[tam-i-1]);
    }    
}

void invertirRec(int arr[], const int tam, int i = 0){
    if(i >= tam)
        return;
    intercambio(arr[i], arr[tam-1]);
    invertirRec(arr, tam-1, i+1);
}

int main() {
    const int tam = 5;
    int arr[tam] = {10, 5, 6, 3, 1};
    
    imprimir(arr, tam); // 5 6 3 1
    invertir(arr, tam);
    imprimir(arr, tam); // 1 3 6 5 
    invertirRec(arr, tam);
    imprimir(arr, tam); // 5 6 3 1 
    
    return 0;
}