#include <iostream>
#include "DynIntegerArray.h"

using namespace std;

int main() {
    int arr[2] = {2,3};
    DynIntegerArray a(2, arr);
    
    a.print();
    a.push_back(5);
    a.print();

    return 0;
}