// Descripcion: Devuelve verdadero si el numero natural recibido es triangular.
// Diseño: numero<N> ----> esTriangular ----> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esTriangular(int numero) {
    if (numero < 0) return false;
    if (numero == 0) return true;

    int suma = 0;
    int i = 1;
    while (suma < numero) {
        suma += i;
        i++;
    }
    return (suma == numero);
}

int main() {
    assert(esTriangular(6) == true);
    assert(esTriangular(10) == true);
    assert(esTriangular(5) == false);
    cout << "va bien" << endl;
    return 0;
}
