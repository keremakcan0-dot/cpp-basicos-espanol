// Descripcion: Recibe un numero y devuelve su factorial.
// Diseño: n:Natural ---> factorial() ---> res:Natural
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

long long factorial(int numero) {
    if (numero < 0 || numero > 20) return 0;
    long long resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    assert(factorial(5) == 120);
    assert(factorial(21) == 0);
    cout << "va bien" << endl;
    return 0;
}
