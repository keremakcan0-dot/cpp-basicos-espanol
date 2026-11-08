// Descripcion: Cuenta cuantos divisores impares tiene un numero natural n (usa esDivisorImpar).
// Diseño: n:N ---> contarDivisoresImpares() ---> cantidad:N
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esDivisorImpar(int a, int b) {
    if (a == 0) return false;
    return b % a == 0 && a % 2 == 1;
}

int contarDivisoresImpares(int n) {
    int contador = 0;
    for (int i = 1; i <= n; i++) {
        if (esDivisorImpar(i, n)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    assert(contarDivisoresImpares(5) == 2);    // 1, 5
    assert(contarDivisoresImpares(12) == 2);   // 1, 3
    assert(contarDivisoresImpares(9) == 3);    // 1, 3, 9
    assert(contarDivisoresImpares(8) == 1);    // 1
    cout << "va bien" << endl;
    return 0;
}
