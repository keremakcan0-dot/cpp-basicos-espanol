// Descripcion: Suma los numeros triangulares que hay entre dos numeros naturales dados.
// Diseño: numero1<N>, numero2<N> ----> sumaTriangular() ----> suma<N>
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

int sumaTriangular(int numero1, int numero2) {
    int suma = 0;
    for (int i = numero1; i <= numero2; i++) {
        if (esTriangular(i)) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    assert(sumaTriangular(1, 10) == 20);
    assert(sumaTriangular(4, 8) == 6);
    cout << "va bien" << endl;
    return 0;
}
