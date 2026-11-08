// Descripcion: Suma los numeros pares por un lado y los impares por otro en una lista.
// Diseño: lista[N] ---> separarSumas() ---> lista[par], lista[impar]
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esDivisible(int a, int b) {
    return b != 0 && a % b == 0;
}

void separarSumas(int listaEntrada[], int cuantas, int listaSalida[]) {
    listaSalida[0] = 0; // Pares
    listaSalida[1] = 0; // Impares

    for (int i = 0; i < cuantas; i++) {
        if (esDivisible(listaEntrada[i], 2)) {
            listaSalida[0] += listaEntrada[i];
        } else {
            listaSalida[1] += listaEntrada[i];
        }
    }
}

int main() {
    int listaEntrada[5] = {1, 2, 3, 4, 5};
    int listaSalida[2];

    separarSumas(listaEntrada, 5, listaSalida);

    assert(listaSalida[0] == 6);
    assert(listaSalida[1] == 9);
    cout << "va bien" << endl;
    return 0;
}
