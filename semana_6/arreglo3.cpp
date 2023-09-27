#include <iostream>

using namespace std;

long sumar(const int arr[], const int tam) {
    long sum = 0;
    for(int i = 0; i < tam; sum += arr[i++]);
    return sum;
}

void imprimir(const int arr[], const int tam) {
    cout << "Los elementos del arreglo son: [";
    for (int i = 0; i < tam; i++) {
        cout << " " << arr[i];
    }
    cout << "]" << endl;
}

int main() {
    const int tam = 4;
    int arr[tam] = {5, 6, 3, 1};
    
    cout << "La suma es: " << sumar(arr, tam) << endl;    
    
    return 0;
}