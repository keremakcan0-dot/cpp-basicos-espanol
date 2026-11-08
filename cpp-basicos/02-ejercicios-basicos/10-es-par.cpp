// Descripcion: Funcion que dice si un numero es par.
// Diseño: numero ---> esPar() ---> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    assert(esPar(4) == true);
    assert(esPar(0) == true);
    assert(esPar(-2) == true);
    assert(esPar(7) == false);
    assert(esPar(-3) == false);
    cout << "va bien" << endl;
    return 0;
}
