// Descripcion: Calcula la suma de los numeros del 0 al 15 mediante un bucle for.
// Diseño: 0..15 ---> bucle for ---> sumaTotal
// ----AUTOR: Kerem Akcan----
// ----FECHA: 30/09/2026----

#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    for (int i = 0; i <= 15; i++) {
        suma += i;
    }
    cout << suma << endl;
    return 0;
}
