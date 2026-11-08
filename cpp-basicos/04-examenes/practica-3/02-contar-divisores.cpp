// Descripcion: Cuenta cuantos divisores tiene un numero natural usando la funcion anterior.
// Diseño: a ---> contarDivisores() ---> totalDivisores
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esDivisorMutual(int a, int b) {
    if (a == 0 || b == 0) return false;
    return a % b == 0 || b % a == 0;
}

int contarDivisores(int a) {
    int totalDivisores = 0;
    for (int i = 1; i <= a; i++) {
        if (esDivisorMutual(a, i)) {
            totalDivisores++;
        }
    }
    return totalDivisores;
}

int main() {
    assert(contarDivisores(10) == 4);
    cout << "va bien" << endl;
    return 0;
}
