#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main() {
    array<int, 5> n;

    for (size_t i = 0; i < n.size(); i++) {
        n[i] = 0;
    }

    cout << "Element" << setw(10) << "Value" << endl;
    for (size_t i = 0; i < n.size(); i++) {
        cout << setw(7) << i << setw(10) << n[i] << endl; 
    }
    
    return 0;
}