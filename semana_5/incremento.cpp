#include <iostream>

using namespace std;

void inc(int &a) {
    a++;
}

int main() {
    
    int a = 10;
    cout << a << endl;
    inc(a);
    cout << a << endl;
    return 0;
}

