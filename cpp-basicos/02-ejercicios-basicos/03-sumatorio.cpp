// Descripcion: Recibe un numero entero y hace el sumatorio desde 1 a ese numero.
// Diseño: numero ---> sumatorio() ---> suma
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

int sumatorio(int numero) {
    int suma = 0;
    for (int i = 1; i <= numero; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    assert(sumatorio(5) == 15);
    cout << "va bien" << endl;
    return 0;
}
