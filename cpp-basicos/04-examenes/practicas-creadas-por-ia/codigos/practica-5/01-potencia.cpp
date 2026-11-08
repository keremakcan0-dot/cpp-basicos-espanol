// Descripcion: Calcula x elevado a n (x real, n entero). Se cumple x^0 = 1, x^(-a) = 1 / x^a y 0^0 devuelve 1.
// Diseño: x:R, n:Z ---> potencia() ---> R
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

double potencia(double x, int n) {
    if (n == 0) return 1.0;
    if (x == 0.0 && n < 0) return 0.0; // Caso no definido: se adopta 0 como valor de error.

    long long exponente = n;
    if (exponente < 0) exponente = -exponente;

    double resultado = 1.0;
    for (long long i = 0; i < exponente; i++) {
        resultado *= x;
    }

    return (n < 0) ? 1.0 / resultado : resultado;
}

int main() {
    assert(potencia(5, 2) == 25);
    assert(potencia(2, 10) == 1024);
    assert(potencia(2, 0) == 1);
    assert(potencia(0, 0) == 1);
    assert(potencia(2, -2) == 0.25);
    assert(potencia(0, -1) == 0.0);
    cout << "va bien" << endl;
    return 0;
}
