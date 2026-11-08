// Descripcion: Devuelve los n primeros numeros de la serie de Fibonacci en una lista.
// Diseño: Natural ---> fibonacci() ---> [entero], Natural
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void fibonacci(int n, int lista[], int& cuantos) {
    cuantos = n;
    if (n >= 1) lista[0] = 0;
    if (n >= 2) lista[1] = 1;

    for (int i = 2; i < n; i++) {
        lista[i] = lista[i - 1] + lista[i - 2];
    }
}

int main() {
    int n = 6;
    int lista[6];
    int cuantos;

    fibonacci(n, lista, cuantos);

    assert(cuantos == 6);
    assert(lista[0] == 0 && lista[5] == 5);
    cout << "va bien" << endl;
    return 0;
}
