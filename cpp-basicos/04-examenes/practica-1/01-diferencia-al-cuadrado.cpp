// Descripcion: Calcular a partir de dos numeros reales (x,m): (x-m)^2.
// Diseño: x:R, m:R ---> calcularDiferenciaCuadrado() ---> R
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

double calcularDiferenciaCuadrado(double x, double m) {
    return (x - m) * (x - m);
}

int main() {
    assert(calcularDiferenciaCuadrado(5, 2) == 9);
    cout << "va bien" << endl;
    return 0;
}
