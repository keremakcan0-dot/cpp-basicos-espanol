// Descripcion: Cuenta cuantos multiplos de x hay entre 1 y n (usa la funcion esDivisible del ejercicio anterior).
// Diseño: x:N, n:N ---> contarMultiplos() ---> cantidad:N
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esDivisible(int a, int b) {
    if (b == 0) return false;
    return a % b == 0;
}

int contarMultiplos(int x, int n) {
    int contador = 0;
    for (int i = 1; i <= n; i++) {
        if (esDivisible(i, x)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    assert(contarMultiplos(3, 10) == 3);   // 3, 6, 9
    assert(contarMultiplos(10, 5) == 0);
    assert(contarMultiplos(1, 4) == 4);
    cout << "va bien" << endl;
    return 0;
}
