// Descripcion: Funcion que recibe un numero y devuelve ese numero multiplicado por 3.
// Diseño: numero ---> porTres() ---> numero * 3
// ----AUTOR: Kerem Akcan----
// ----FECHA: 30/09/2026----

#include <iostream>
using namespace std;

double porTres(double numero) {
    return numero * 3;
}

int main() {
    double numero;
    cout << "Escribe un numero: ";
    cin >> numero;
    cout << "El resultado es: " << porTres(numero) << endl;
    return 0;
}
