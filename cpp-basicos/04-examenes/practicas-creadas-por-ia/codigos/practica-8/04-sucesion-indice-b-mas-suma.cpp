// Descripcion: Genera los n primeros terminos de la sucesion: l[0] = a, l[i] = i * b + suma de los terminos anteriores.
// Diseño: a, b, n ---> generarSucesion() ---> lista[N]
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void generarSucesion(int a, int b, int n, int lista[]) {
    if (n <= 0) return;

    lista[0] = a;

    for (int i = 1; i < n; i++) {
        int sumaAnteriores = 0;
        for (int k = 0; k < i; k++) {
            sumaAnteriores += lista[k];
        }
        lista[i] = i * b + sumaAnteriores;
    }
}

int main() {
    int lista[5];
    generarSucesion(2, 3, 5, lista);

    assert(lista[0] == 2);
    assert(lista[1] == 5);     // 1*3 + 2
    assert(lista[2] == 13);    // 2*3 + (2 + 5)
    assert(lista[3] == 29);    // 3*3 + (2 + 5 + 13)
    assert(lista[4] == 61);    // 4*3 + (2 + 5 + 13 + 29)
    cout << "va bien" << endl;
    return 0;
}
