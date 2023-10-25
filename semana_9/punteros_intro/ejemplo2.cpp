#include <iostream>

using namespace std;

int main() {
    double var = 3.1416;
    double *ptr = &var;

    //cout << *ptr << endl;

    string cad = "ciencia";
    string *ptr1 = &cad;

    cout << *ptr1 << endl;
    
    cout << cad.at(0) << endl;
    cout << (*ptr1).at(0) << endl;
    cout << ptr1->at(0) << endl;

    cout << cad.length() << endl;
    cout << (*ptr1).length() << endl;
    cout << ptr1->length() << endl;
    return 0;
}