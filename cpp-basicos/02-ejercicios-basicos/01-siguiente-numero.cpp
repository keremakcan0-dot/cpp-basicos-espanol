// Descripcion: Funcion que recibe un numero entero y devuelve el entero siguiente.
// Diseño: Numero ---> sigNumero() ---> numero + 1
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

int sigNumero(int numero) {
    return numero + 1;
}

int main() {
    assert(sigNumero(5) == 6);
    cout << "va bien" << endl;
    return 0;
}
