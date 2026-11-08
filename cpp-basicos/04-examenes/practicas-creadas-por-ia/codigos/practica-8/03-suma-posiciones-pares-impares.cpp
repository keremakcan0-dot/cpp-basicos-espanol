// Descripcion: Suma por separado los valores en posiciones pares y en posiciones impares de una lista.
// Diseño: lista[N] ---> sumarPosiciones() ---> resultado[2] (posiciones pares, posiciones impares)
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void sumarPosiciones(int lista[], int cuantos, int resultado[]) {
    resultado[0] = 0;   // suma de las posiciones pares (0, 2, 4...)
    resultado[1] = 0;   // suma de las posiciones impares (1, 3, 5...)

    for (int i = 0; i < cuantos; i++) {
        if (i % 2 == 0) {
            resultado[0] += lista[i];
        } else {
            resultado[1] += lista[i];
        }
    }
}

int main() {
    int lista[5] = {1, 2, 3, 4, 5};
    int resultado[2];

    sumarPosiciones(lista, 5, resultado);

    assert(resultado[0] == 9);   // 1 + 3 + 5
    assert(resultado[1] == 6);   // 2 + 4
    cout << "va bien" << endl;
    return 0;
}
