#include <iostream>

using namespace std;

int main() {
    int number1{0};
    int number2{0};
    int sum{0};

    cout << "Enter first integer: ";
    cin >> number1;

    cout << "Enter second integer: ";
    cin >> number2;

    sum = number1 + number2;

    cout << "Sum is " << sum << endl;

    return 0;
}