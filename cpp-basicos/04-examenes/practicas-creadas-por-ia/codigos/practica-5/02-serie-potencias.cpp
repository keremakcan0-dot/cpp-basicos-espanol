// Descripcion: Calcula f(x, n) = x^1/1^1 + x^2/2^2 + x^3/3^3 + ... + x^n/n^n (usa potencia).
// Diseño: x:R, n:N ---> f() ---> R
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

double f(double x, int n) {
    double suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += potencia(x, i) / potencia(i, i);
    }
    return suma;
}

int main() {
    assert(f(1, 1) == 1);
    assert(f(2, 1) == 2);
    assert(f(2, 2) == 3);    // 2/1 + 4/4
    assert(f(3, 0) == 0);
    cout << "va bien" << endl;
    return 0;
}
