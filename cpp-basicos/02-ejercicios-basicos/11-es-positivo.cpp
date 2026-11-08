// Descripcion: Funcion que dice si un numero es positivo.
// Diseño: numero ---> esPositivo() ---> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esPositivo(int numero) {
    return numero > 0;
}

int main() {
    assert(esPositivo(3) == true);
    assert(esPositivo(0) == false);
    assert(esPositivo(-3) == false);
    cout << "va bien" << endl;
    return 0;
}
