#include <iostream>

using namespace std;

bool esLetra(char c) {
    return ( (c >= 65 && c <= 90) || (c >= 97 && c <= 122) );
}

bool esMayuscula(char c) {
    return (c >= 65 && c <= 90);
}

char convertirMinuscula(char c) {
    return c+32;
}

bool esNumero(char c) {
    return (c >= 48 && c <= 57);
}

void evaluarCadena(char cadena[]) {
    //char car = cadena[0];
    for (int i = 0; cadena[i] != '\0'; i++) {
        if(esLetra(cadena[i]))
            cadena[i] = (esMayuscula(cadena[i])) ? convertirMinuscula(cadena[i]) : cadena[i];    
        else {
            if(esNumero(cadena[i]))
                cadena[i] = '-';
        }
    }    
}

int main() {
    char cadena[] = "HOLA345como&5estas";
    evaluarCadena(cadena);
    cout << cadena << endl;

    return 0;
}