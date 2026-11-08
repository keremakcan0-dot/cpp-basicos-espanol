// Descripcion: Cuenta cuantos numeros positivos hay en una lista.
// Diseño: lista[N] ---> cuantasPositivos() ---> cantidad
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esPositivo(int a) {
    return a > 0;
}

int cuantasPositivos(int lista[], int cuantas) {
    int positivos = 0;
    for (int i = 0; i < cuantas; i++) {
        if (esPositivo(lista[i])) {
            positivos++;
        }
    }
    return positivos;
}

int main() {
    int lista[5] = {1, 2, 3, 4, 5};
    assert(cuantasPositivos(lista, 5) == 5);
    cout << "va bien" << endl;
    return 0;
}
