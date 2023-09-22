#include <iostream>

using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    
    int x = 20;
    int y = 10;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;  
    intercambio(x, y);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;  
    return 0;
}

