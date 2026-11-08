// Descripcion: Genera una lista con los numeros desde el menor hasta el mayor.
// Diseño: a, b ---> funcion() ---> lista[N], cuantos
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void generarLista(int a, int b, int lista[], int& cuantos) {
    int menor = a;
    int mayor = b;

    if (a > b) {
        menor = b;
        mayor = a;
    }

    cuantos = 0;
    for (int i = menor; i <= mayor; i++) {
        lista[cuantos] = i;
        cuantos++;
    }
}

int main() {
    int a = 5;
    int b = 7;
    int lista[3];
    int cuantos;

    generarLista(a, b, lista, cuantos);

    assert(cuantos == 3);
    assert(lista[0] == 5 && lista[2] == 7);

    // Si los numeros llegan al reves, el resultado es el mismo
    generarLista(b, a, lista, cuantos);
    assert(cuantos == 3);
    assert(lista[0] == 5 && lista[2] == 7);

    for (int i = 0; i < cuantos; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
    return 0;
}
