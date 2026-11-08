// Descripcion: Cuenta los divisores de un numero (unsigned version).
// Diseño: n ---> contarDivisores() ---> contador
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
using namespace std;

bool esDivisor(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0) return false;
    return (a % b == 0) || (b % a == 0);
}

unsigned int contarDivisores(unsigned int n) {
    unsigned int contador = 0;
    for (unsigned int i = 1; i <= n; i++) {
        if (esDivisor(i, n)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    cout << "Prueba 1 (Numero 10) - Esperado: 4 | Resultado: " << contarDivisores(10) << endl;
    cout << "Prueba 2 (Numero 7)  - Esperado: 2 | Resultado: " << contarDivisores(7) << endl;
    cout << "Prueba 3 (Numero 12) - Esperado: 6 | Resultado: " << contarDivisores(12) << endl;
    return 0;
}
