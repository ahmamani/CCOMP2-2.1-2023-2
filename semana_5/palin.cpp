#include <iostream>

using namespace std;

int revertirNum(int n) {  // 1234
    int aux = n;
    int rev = 0;
    while(aux > 0) { // 4ta
        rev = rev * 10 + aux % 10;
        aux /= 10;
    }
    return rev;
}

int main() {
    int n = 123321;

    if(n == revertirNum(n))
        cout << "Es palindromo xP" << endl;
    else
        cout << "No es palindromo!!!" << endl;

    return 0;
}

