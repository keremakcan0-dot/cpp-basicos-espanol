// Descripcion: Copia una lista de enteros en otra invirtiendo el orden de la lista original.
// Diseño: listaEntrada<Z>, tam ---> Inversion() ---> listaSalida<Z>
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void Inversion(const int listaEntrada[], int cuantas, int listaSalida[]) {
    for (int i = 0; i < cuantas; i++) {
        listaSalida[i] = listaEntrada[cuantas - 1 - i];
    }
}

int main() {
    int listaEntrada[] = {1, 2, 3, 4};
    int listaSalida[4];
    
    Inversion(listaEntrada, 4, listaSalida);
    
    assert(listaSalida[0] == 4);
    assert(listaSalida[1] == 3);
    assert(listaSalida[2] == 2);
    assert(listaSalida[3] == 1);
    
    cout << "va bien" << endl;
    return 0;
}
