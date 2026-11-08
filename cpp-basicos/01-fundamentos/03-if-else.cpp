// Descripcion: Comprueba si un numero ingresado es positivo, negativo o cero.
// Diseño: numeroIngresado ---> if/else ---> mensaje en consola
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
using namespace std;

int main() {
    int numeroIngresado;
    cout << "Introduce un numero: ";
    cin >> numeroIngresado;

    if (numeroIngresado > 0) {
        cout << "El numero introducido es positivo" << endl;
    } else if (numeroIngresado < 0) {
        cout << "El numero introducido es negativo" << endl;
    } else {
        cout << "El numero introducido es cero" << endl;
    }
    return 0;
}
