// Descripcion: Cuenta cuantos numeros abundantes hay en el rango cerrado [a, b] (usa esAbundante).
// Diseño: a:N, b:N ---> contarAbundantes() ---> cantidad:N
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esAbundante(int a) {
    int sumaDivisores = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            sumaDivisores += i;
        }
    }
    return sumaDivisores > a;
}

int contarAbundantes(int a, int b) {
    int contador = 0;
    for (int i = a; i <= b; i++) {
        if (esAbundante(i)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    assert(contarAbundantes(3, 12) == 1);    // solo el 12
    assert(contarAbundantes(1, 20) == 3);    // 12, 18, 20
    assert(contarAbundantes(1, 11) == 0);
    cout << "va bien" << endl;
    return 0;
}
