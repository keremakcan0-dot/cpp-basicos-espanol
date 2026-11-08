// Descripcion: Recibe dos numeros naturales y devuelve verdadero si el primero es divisible por el segundo (multiplo).
// Diseño: a:N, b:N ---> esDivisible() ---> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esDivisible(int a, int b) {
    if (b == 0) return false;
    return a % b == 0;
}

int main() {
    assert(esDivisible(10, 5) == true);
    assert(esDivisible(5, 5) == true);
    assert(esDivisible(5, 7) == false);
    assert(esDivisible(5, 0) == false);
    cout << "va bien" << endl;
    return 0;
}
