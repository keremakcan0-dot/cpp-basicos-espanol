// Descripcion: Devuelve verdadero si un numero natural es abundante (suma de sus divisores propios > el numero).
// Diseño: a:N ---> esAbundante() ---> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esAbundante(int a) {
    int sumaDivisores = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            sumaDivisores += i;
        }
    }
    return sumaDivisores > a;
}

int main() {
    assert(esAbundante(12) == true);    // 1+2+3+4+6 = 16
    assert(esAbundante(18) == true);
    assert(esAbundante(6) == false);    // 6 es perfecto, no abundante
    assert(esAbundante(7) == false);
    assert(esAbundante(1) == false);
    cout << "va bien" << endl;
    return 0;
}
