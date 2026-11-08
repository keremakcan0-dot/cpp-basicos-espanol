// Descripcion: Devuelve verdadero si a es divisor de b y ademas a es impar.
// Diseño: a:N, b:N ---> esDivisorImpar() ---> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esDivisorImpar(int a, int b) {
    if (a == 0) return false;
    return b % a == 0 && a % 2 == 1;
}

int main() {
    assert(esDivisorImpar(3, 15) == true);
    assert(esDivisorImpar(15, 3) == false);   // 15 no es divisor de 3
    assert(esDivisorImpar(2, 10) == false);   // es divisor, pero es par
    assert(esDivisorImpar(3, 10) == false);
    cout << "va bien" << endl;
    return 0;
}
