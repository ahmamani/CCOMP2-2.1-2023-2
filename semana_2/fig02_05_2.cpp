#include <iostream>

using namespace std;

int main() {
    int number1{0};
    int number2{0};
    int number3{0};
    int sum{0};

    cout << "Enter first integer: ";
    cin >> number1;

    cout << "Enter second integer: ";
    cin >> number2;

    cout << "Enter third integer: ";
    cin >> number3;

    if ( (number1 >= number2) && (number1 >= number3)) {
        cout << "El mayor es " << number1;
    }    
    if ( (number2 >= number1) && (number2 >= number3)) {
        cout << "El mayor es " << number2;
    }        
    if ( (number3 >= number1) && (number3 >= number2)) {
        cout << "El mayor es " << number3;
    }   

    return 0;
}