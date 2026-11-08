// Descripcion: Lee un numero y encuentra el siguiente numero primo.
// Diseño: numero ---> bucle de busqueda ---> esPrimo ---> siguiente primo
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
using namespace std;

int main() {
    int numero;
    bool esPrimo = true;

    cout << "Introduce un numero: ";
    cin >> numero;

    do {
        numero++;
        esPrimo = true;

        if (numero < 2) {
            esPrimo = false;
        }

        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }
    } while (esPrimo == false);

    cout << "El siguiente numero primo es: " << numero << endl;
    return 0;
}
