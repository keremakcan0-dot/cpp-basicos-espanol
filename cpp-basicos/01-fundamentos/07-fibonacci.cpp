// Descripcion: Muestra los numeros de Fibonacci hasta el valor 14000.
// Diseño: anterior, actual ---> calcular siguiente ---> mostrar
// ----AUTOR: Kerem Akcan----
// ----FECHA: 30/09/2026----

#include <iostream>
using namespace std;

int main() {
    int anterior = 0;
    int actual = 1;

    cout << "Numeros de Fibonacci:" << endl;

    while (anterior <= 14000) {
        cout << anterior << " ";
        int siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
    }
    cout << endl;
    return 0;
}
