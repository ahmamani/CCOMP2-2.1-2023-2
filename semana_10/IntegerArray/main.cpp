#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {
    IntegerArray a(2);
    a.set(0, 10);
    a.set(1, 5);

    if(true) {
        IntegerArray b = a;
    }
    
    a.print();

    return 0;
}