#include <iostream>

using namespace std;

void imprimir(int *arr, int tam) {
    for(int i = 0; i < tam; i++, arr++) {
        cout << *arr << " ";
    }
    cout << endl;
}

void intercambioPtr(int *p, int *q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

void invertir(int *ini, int *fin) {
    while( ini < fin) {
        intercambioPtr(ini++, fin--);
    }
}

int main() {
    int arr[] = {15, 24, 30, 41, 55, 66};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << tam << endl;
    
    imprimir(arr, tam);
    invertir(arr, arr + tam - 1);
    imprimir(arr, tam);

    return 0;
}