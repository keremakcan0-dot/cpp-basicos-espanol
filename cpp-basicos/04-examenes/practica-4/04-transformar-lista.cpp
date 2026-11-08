// Descripcion: Transforma lista: negativos a 0, positivos multiplicados por n.
// Diseño: lista[N] ---> transformar() ----> V[Z]
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void transformar(int lista[], int cuantas, int n) {
    for (int i = 0; i < cuantas; i++) {
        if (lista[i] < 0) {
            lista[i] = 0;
        } else if (lista[i] > 0) {
            lista[i] *= n;
        }
    }
}

int main() {
    int lista[] = {-1, 0, 1, 2};
    transformar(lista, 4, 2);

    assert(lista[0] == 0);
    assert(lista[1] == 0);
    assert(lista[2] == 2);
    assert(lista[3] == 4);
    cout << "va bien" << endl;
    return 0;
}
