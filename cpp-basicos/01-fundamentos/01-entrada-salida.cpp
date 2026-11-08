// Descripcion: Pide un numero al usuario, le suma 1 y lo muestra por pantalla.
// Diseño: numeroIngresado ---> +1 ---> resultado
// ----AUTOR: Kerem Akcan----
// ----FECHA: 30/09/2026----

#include <iostream>
using namespace std;

int main() {
    int numeroIngresado;
    cout << "Por favor, introduce un numero: ";
    cin >> numeroIngresado;
    numeroIngresado++;
    cout << "Resultado: " << numeroIngresado << endl;
    return 0;
}
