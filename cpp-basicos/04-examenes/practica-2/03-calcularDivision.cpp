// Descripcion: Calcula cociente y resto mediante restas sucesivas.
// El cociente se trunca hacia cero y el resto conserva el signo del numerador.
// Si el denominador es cero o el cociente no cabe en int, devuelve 0 en ambos resultados.
// ----AUTOR: Kerem Akcan----

#include <iostream>
#include <cassert>
#include <climits>
using namespace std;

void calcularDivision(int numerador, int denominador, int& cociente, int& resto) {
    cociente = 0;
    resto = 0;

    if (denominador == 0) return;

    long long dividendoAbs = numerador;
    long long divisorAbs = denominador;
    if (dividendoAbs < 0) dividendoAbs = -dividendoAbs;
    if (divisorAbs < 0) divisorAbs = -divisorAbs;

    long long q = 0;
    long long r = dividendoAbs;
    while (r >= divisorAbs) {
        r -= divisorAbs;
        ++q;
    }

    if ((numerador < 0) != (denominador < 0)) q = -q;
    if (q < INT_MIN || q > INT_MAX) return;

    cociente = static_cast<int>(q);
    resto = (numerador < 0) ? -static_cast<int>(r) : static_cast<int>(r);
}

int main() {
    int cociente, resto;

    calcularDivision(15, 3, cociente, resto);
    assert(cociente == 5 && resto == 0);

    calcularDivision(17, 5, cociente, resto);
    assert(cociente == 3 && resto == 2);

    calcularDivision(-17, 5, cociente, resto);
    assert(cociente == -3 && resto == -2);

    calcularDivision(17, -5, cociente, resto);
    assert(cociente == -3 && resto == 2);

    calcularDivision(15, 0, cociente, resto);
    assert(cociente == 0 && resto == 0);

    cout << "va bien" << endl;
    return 0;
}
