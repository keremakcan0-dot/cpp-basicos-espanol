// Descripcion: Recorre un array de numeros y comprueba si estan aprobados (>=3) o suspensos (<3).
// Diseño: numeros[5] ---> bucle for ---> mensaje (aprobado/suspenso)
// ----AUTOR: Kerem Akcan----
// ----FECHA: 30/09/2026----

#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << endl;
        if (numeros[i] < 3) {
            cout << "suspenso" << endl;
        } else {
            cout << "aprobado" << endl;
        }
    }
    return 0;
}
