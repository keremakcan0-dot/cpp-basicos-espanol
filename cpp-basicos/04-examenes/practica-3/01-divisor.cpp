// Descripcion: Recibe dos numeros naturales y devuelve verdadero si uno es divisor del otro.
// Diseño: a, b ---> esDivisorMutual() ---> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esDivisorMutual(int a, int b) {
    if (a == 0 || b == 0) return false;
    return a % b == 0 || b % a == 0;
}

int main() {
    assert(esDivisorMutual(3, 12) == true);
    cout << "va bien" << endl;
    return 0;
}
