// Descripcion: Comprueba si un numero natural es un numero de Armstrong.
// Diseño: numero ---> esArmstrong() ---> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esArmstrong(int n) {
    if (n < 0) return false;

    int cifras = 0;
    int copia = n;
    do {
        cifras++;
        copia = copia / 10;
    } while (copia > 0);

    int suma = 0;
    copia = n;
    while (copia > 0) {
        int cifra = copia % 10;
        int potencia = 1;
        for (int i = 0; i < cifras; i++) {
            potencia *= cifra;
        }
        suma += potencia;
        copia = copia / 10;
    }

    return suma == n;
}

int main() {
    assert(esArmstrong(153));
    assert(esArmstrong(370));
    assert(esArmstrong(9));
    assert(!esArmstrong(123));
    cout << "va bien" << endl;
    return 0;
}
