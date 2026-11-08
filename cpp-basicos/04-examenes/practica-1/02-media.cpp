// Descripcion: Calcula la media de una lista de numeros reales.
// Para una lista vacia o un tamano no positivo devuelve 0.
// Diseno: lista<R>, cuantas ---> media() ---> R
// ----AUTOR: Kerem Akcan----

#include <iostream>
#include <cassert>
using namespace std;

double media(const double lista[], int cuantas) {
    if (cuantas <= 0) return 0.0;

    double suma = 0.0;
    for (int i = 0; i < cuantas; i++) {
        suma += lista[i];
    }
    return suma / cuantas;
}

int main() {
    double lista[5] = {1, 2, 3, 4, 5};
    assert(media(lista, 5) == 3.0);
    assert(media(lista, 1) == 1.0);
    assert(media(lista, 0) == 0.0);
    cout << "va bien" << endl;
    return 0;
}
