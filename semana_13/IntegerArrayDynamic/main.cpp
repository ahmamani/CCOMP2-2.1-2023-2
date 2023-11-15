#include <iostream>
#include "DynIntegerArray.h"

using namespace std;

int main() {
    int arr[2] = {2,3};
    DynIntegerArray a(2, arr);
    
    //a.print();
    cout << a << endl;

    a.push_back(5);
    //a.print();
    cout << a << endl;

    a.insert(1,10);
    cout << a << endl;

    a.remove(1);
    cout << a << endl;
    return 0;
}