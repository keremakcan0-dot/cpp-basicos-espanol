// Descripcion: Ordena una lista de numeros de menor a mayor.
// Diseño: lista[N] ---> ordenar() ---> lista_ordenada[N]
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void ordenar(int lista[], int cuantas) {
    for (int i = 0; i < cuantas - 1; i++) {
        for (int j = 0; j < cuantas - 1 - i; j++) {
            if (lista[j] > lista[j + 1]) {
                int temporal = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temporal;
            }
        }
    }
}

int main() {
    int lista[5] = {1, 3, 5, 4, 2};
    ordenar(lista, 5);

    for (int i = 0; i < 5; i++) {
        assert(lista[i] == i + 1);
    }
    cout << "va bien" << endl;
    return 0;
}
