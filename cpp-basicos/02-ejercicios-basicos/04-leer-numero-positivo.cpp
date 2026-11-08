// Descripcion: Pide al usuario un numero hasta que introduzca un numero positivo.
// Diseño: +([ n <= 0 ]) ---> leer n
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
using namespace std;

int main() {
    int numero = 0;

    cout << "Escribe un numero: ";
    cin >> numero;

    while (numero <= 0) {
        if (cin.eof()) {
            cout << "Fin de la entrada, no se ha introducido un numero positivo." << endl;
            return 1;
        }
        // Si el usuario escribe texto, se limpia el error y se descarta la linea
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "El numero debe ser positivo. Intentalo de nuevo: ";
        cin >> numero;
    }

    cout << "Numero positivo: " << numero << endl;
    return 0;
}
