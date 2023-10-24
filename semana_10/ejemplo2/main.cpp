#include <iostream>

using namespace std;

int* getPtr() {
    //int x = 10;
    int *ptr = new int;
    *ptr = 10;
    return ptr;
}

int main() {
    int *p = getPtr();

    cout << *p << endl;

    delete p;
    return 0;
} 