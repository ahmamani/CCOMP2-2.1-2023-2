#include <iostream>

using namespace std;

int main() {
    int val = 21;

    int& ref = val;
    ref++;
    cout << val << endl;

    return 0;
} 