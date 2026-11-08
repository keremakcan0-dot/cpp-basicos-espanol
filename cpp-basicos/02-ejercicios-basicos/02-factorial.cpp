// Descripcion: Calcula el factorial de un numero natural.
// Diseño: Numero ---> factorial() ---> F(numero)
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

long long factorial(int numero) {
    if (numero < 0 || numero > 20) return 0;
    long long factorialTotal = 1;
    for (int i = 1; i <= numero; i++) {
        factorialTotal *= i;
    }
    return factorialTotal;
}

int main() {
    assert(factorial(5) == 120);
    assert(factorial(21) == 0);
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(20) == 2432902008176640000LL);
    assert(factorial(21) == 0);
    cout << "va bien" << endl;
    return 0;
}
