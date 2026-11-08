// Descripcion: Cambia todas las apariciones de un numero por otro en una lista, manteniendo su posicion.
// Diseño: lista[N], buscado, nuevo ---> reemplazar() ---> lista[N] modificada
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void reemplazar(int lista[], int cuantas, int buscado, int nuevo) {
    for (int i = 0; i < cuantas; i++) {
        if (lista[i] == buscado) {
            lista[i] = nuevo;
        }
    }
}

int main() {
    int lista[6] = {1, 2, 3, 2, 5, 2};
    reemplazar(lista, 6, 2, 9);

    assert(lista[0] == 1);
    assert(lista[1] == 9);
    assert(lista[2] == 3);
    assert(lista[3] == 9);
    assert(lista[4] == 5);
    assert(lista[5] == 9);
    cout << "va bien" << endl;
    return 0;
}
