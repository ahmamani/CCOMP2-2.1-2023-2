#include <iostream>

using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void intercambioPtr(int *p, int *q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

void intercambioPtr2(int **p, int **q ){
    int tmp = **p;
    **p = **q;
    **q = tmp; 
}

int main() {
    int x = 10;
    int y = 20;
    intercambio(x, y);

    cout << x << " " << y << endl;

    intercambioPtr(&x, &y);
    cout << x << " " << y << endl;

    int *ptr1 = &x;
    int *ptr2 = &y;
    intercambioPtr2(&ptr1, &ptr2);
    cout << x << " " << y << endl;
    
    return 0;
}