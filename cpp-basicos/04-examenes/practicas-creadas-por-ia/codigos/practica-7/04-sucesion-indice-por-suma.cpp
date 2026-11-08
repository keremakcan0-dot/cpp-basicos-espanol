// Descripcion: Genera los n primeros terminos de la sucesion: l[0] = a, l[i] = a + i * (suma de l[k] * b para k < i).
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
        int suma = 0;
        for (int k = 0; k < i; k++) {
            suma += lista[k] * b;
        }
        lista[i] = a + i * suma;
    }
}

int main() {
    int lista[3];
    generarSucesion(1, 2, 3, lista);

    assert(lista[0] == 1);
    assert(lista[1] == 3);     // 1 + 1 * (1*2)
    assert(lista[2] == 17);    // 1 + 2 * ((1 + 3)*2)
    cout << "va bien" << endl;
    return 0;
}
