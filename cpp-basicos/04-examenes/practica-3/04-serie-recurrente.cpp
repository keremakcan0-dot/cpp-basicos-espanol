// Descripcion: Genera una lista donde cada numero es la suma de los anteriores por b.
// Diseño: a, b, n ---> generarSerie() ---> lista[N]
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void generarSerie(int a, int b, int n, int lista[]) {
    if (n <= 0) return;

    lista[0] = a;

    for (int i = 1; i < n; i++) {
        int sumaAnteriores = 0;
        for (int k = 0; k < i; k++) {
            sumaAnteriores += lista[k];
        }
        lista[i] = sumaAnteriores * b;
    }
}

int main() {
    int a = 2, b = 3, n = 5;
    int lista[5];
    generarSerie(a, b, n, lista);

    assert(lista[0] == 2);
    assert(lista[1] == 6);
    assert(lista[2] == 24);
    assert(lista[4] == 384);

    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
    return 0;
}
