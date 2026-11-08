// Descripcion: Recibe una lista de calificaciones y devuelve la cantidad de aprobados.
// Diseño: notas[R] ---> calificar ---> aprobados<N>
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

int calificar(const double notas[], int cuantas) {
    int aprobados = 0;
    for (int i = 0; i < cuantas; i++) {
        if (notas[i] >= 5) {
            aprobados++;
        }
    }
    return aprobados;
}

int main() {
    double notas[] = {3, 5, 8, 4, 10, 2};
    assert(calificar(notas, 6) == 3);
    assert(calificar(notas, 3) == 2);
    cout << "va bien" << endl;
    return 0;
}
