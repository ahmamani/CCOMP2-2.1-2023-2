#include <iostream>

using namespace std;

long sumarFor(const int arr[], const int tam) {
    long sum = 0;
    for(int i = 0; i < tam; sum += arr[i++]);
    return sum;
}

long sumarWhile(const int arr[], const int tam) {
    long sum = 0;
    int i = 0;
    while(i < tam) {
        sum += arr[i++];
    }    
    return sum;
}

// suma los elementos de forma RECURSIVO
long sumarRec(const int arr[], const int tam) {
    if(tam == 0)
        return 0;
    else
        return arr[tam-1] + sumarRec(arr, tam-1);
}

void imprimir(const int arr[], const int tam) {
    cout << "Los elementos del arreglo son: [";
    for (int i = 0; i < tam; i++) {
        cout << " " << arr[i];
    }
    cout << " ]" << endl;
}

void imprimirRec(const int arr[], const int tam, int i = 0) {
    if(tam == 0)
        return;
    cout << arr[i] << " ";
    imprimirRec(arr, tam-1, ++i);
}

int main() {
    const int tam = 4;
    int arr[tam] = {5, 6, 3, 1};
    
    cout << "La impresion es: " << sumarRec(arr, tam) << endl;

    imprimirRec(arr, tam); 
    
    return 0;
}