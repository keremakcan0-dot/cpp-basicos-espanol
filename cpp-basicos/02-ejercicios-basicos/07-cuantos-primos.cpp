// Descripcion: Cuenta cuantos numeros primos hay en una lista.
// Diseño: lista[N] ---> cuantasPrimos() ---> cantidad
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i <= numero / i; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

int cuantasPrimos(int lista[], int tam) {
    int cantidadPrimos = 0;
    for (int k = 0; k < tam; k++) {
        if (esPrimo(lista[k])) {
            cantidadPrimos++;
        }
    }
    return cantidadPrimos;
}

int main() {
    int lista[4] = {1, 2, 3, 4};
    assert(cuantasPrimos(lista, 4) == 2);
    cout << "va bien" << endl;
    return 0;
}
