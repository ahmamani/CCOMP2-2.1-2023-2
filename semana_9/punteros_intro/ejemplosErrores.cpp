#include <iostream>

using namespace std;

int main() {
    int x = 10;
    // int *ptr = x;    // incompatibilidad de tipos

    // OJO CUIDADO CON ESTO
    int *ptr;
    *ptr = 100; 
    cout << *ptr << endl; 

    int x1;
    int y = 10;
    int z = 100;
    cout << '\n' << endl;
    cout << (x1+y) << endl;
    

    return 0;
}