// Descripcion: Calcula el numero de combinaciones C(n, k).
// Para entradas invalidas o n > 20 devuelve 0 (factorial cabe en unsigned long long hasta 20!).
// ----AUTOR: Kerem Akcan----

#include <iostream>
#include <cassert>
using namespace std;

unsigned long long factorial(int numero) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= numero; i++) {
        resultado *= static_cast<unsigned long long>(i);
    }
    return resultado;
}

unsigned long long calcularCombinacion(int numero, int resto) {
    if (numero < 0 || resto < 0 || resto > numero || numero > 20) {
        return 0;
    }
    return factorial(numero) / (factorial(resto) * factorial(numero - resto));
}

int main() {
    assert(calcularCombinacion(5, 3) == 10);
    assert(calcularCombinacion(5, 0) == 1);
    assert(calcularCombinacion(5, 6) == 0);
    assert(calcularCombinacion(-1, 0) == 0);
    cout << "va bien" << endl;
    return 0;
}
