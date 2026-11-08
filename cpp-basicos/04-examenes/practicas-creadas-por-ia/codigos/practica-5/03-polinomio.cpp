// Descripcion: Calcula el valor de un polinomio con coeficientes as[] y exponentes es[]: as[0]*x^es[0] + as[1]*x^es[1] + ... (con punteros).
// Diseño: x:R, as:[R], es:[N], n ---> polinomio() ---> R
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

double polinomio(double x, const double* as, const int* es, int cuantos) {
    double suma = 0;
    for (int i = 0; i < cuantos; i++) {
        suma += *(as + i) * potencia(x, *(es + i));
    }
    return suma;
}

int main() {
    // Polinomio de prueba: 3x^4 + 8x^3 - 5x + x^2
    double as[4] = {3, 8, -5, 1};
    int es[4] = {4, 3, 1, 2};

    assert(polinomio(0, as, es, 4) == 0);
    assert(polinomio(1, as, es, 4) == 7);      // 3 + 8 - 5 + 1
    assert(polinomio(2, as, es, 4) == 106);    // 48 + 64 - 10 + 4
    cout << "va bien" << endl;
    return 0;
}
