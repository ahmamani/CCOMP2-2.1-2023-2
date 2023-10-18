#include <iostream>

using namespace std;

long long fibo(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return fibo(n-2) + fibo(n-1);
}

long long fibo1(int n) {
    if(n == 0 || n == 1)
        return 1;
    int n0 = 1;
    int n1 = 1;
    int fibo;
    for(int i = 2; i < n; i++) {
        fibo = n0 + n1;
        n1 = fibo;
        n0 = n1;
    }
    return fibo;
}

int main() {
    int n;

    cout << "Ingrese el numero: ";
    cin >> n;

    cout << "El fib de " << n << " es " << fibo(n) << endl;
    cout << "El fib de " << n << " es " << fibo1(n) << endl;
    return 0;
}