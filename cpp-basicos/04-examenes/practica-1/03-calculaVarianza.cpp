// Descripcion: Calcula la varianza poblacional de una lista de numeros reales.
// Para una lista vacia o un tamano no positivo devuelve 0.
// ----AUTOR: Kerem Akcan----

#include <iostream>
#include <cassert>
using namespace std;

double calculaMedia(const double lista[], int cuantas) {
    if (cuantas <= 0) return 0.0;

    double suma = 0.0;
    for (int i = 0; i < cuantas; i++) {
        suma += lista[i];
    }
    return suma / cuantas;
}

double diferenciaCuadrado(double x, double m) {
    return (x - m) * (x - m);
}

double calculaVarianza(const double lista[], int cuantas) {
    if (cuantas <= 0) return 0.0;

    const double media = calculaMedia(lista, cuantas);
    double sumaDiferencias = 0.0;

    // Se acumula directamente: no hace falta un array temporal de tamano fijo.
    for (int i = 0; i < cuantas; i++) {
        sumaDiferencias += diferenciaCuadrado(lista[i], media);
    }
    return sumaDiferencias / cuantas;
}

int main() {
    const double lista[] = {1.0, 5.0};
    assert(calculaVarianza(lista, 2) == 4.0);
    assert(calculaVarianza(lista, 0) == 0.0);
    cout << "va bien" << endl;
    return 0;
}
