// Descripcion: Genera los n primeros terminos de la sucesion: l[0] = a, l[i] = b + suma de los terminos anteriores.
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
        lista[i] = b + sumaAnteriores;
    }
}

int main() {
    int lista[4];
    generarSucesion(1, 2, 4, lista);

    assert(lista[0] == 1);
    assert(lista[1] == 3);    // 2 + 1
    assert(lista[2] == 6);    // 2 + (1 + 3)
    assert(lista[3] == 12);   // 2 + (1 + 3 + 6)
    cout << "va bien" << endl;
    return 0;
}
