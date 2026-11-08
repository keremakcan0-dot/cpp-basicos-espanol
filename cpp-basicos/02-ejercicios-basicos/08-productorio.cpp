// Descripcion: Recibe un numero entero y hace el productorio desde 1 a ese numero.
// Diseño: numero ---> productorio() ---> producto
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

int productorio(int numero) {
    int producto = 1;
    for (int i = 1; i <= numero; i++) {
        producto *= i;
    }
    return producto;
}

int main() {
    assert(productorio(5) == 120);
    assert(productorio(1) == 1);
    assert(productorio(0) == 1);
    cout << "va bien" << endl;
    return 0;
}
