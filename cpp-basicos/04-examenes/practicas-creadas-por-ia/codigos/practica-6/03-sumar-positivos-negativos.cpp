// Descripcion: Suma por separado los positivos y los negativos de una lista (ignora los ceros).
// Diseño: lista[N] ---> sumarPositivosNegativos() ---> resultados[2] (positivos, negativos)
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void sumarPositivosNegativos(int numeros[], int cuantos, int resultados[]) {
    resultados[0] = 0;   // suma de los positivos
    resultados[1] = 0;   // suma de los negativos

    for (int i = 0; i < cuantos; i++) {
        if (numeros[i] > 0) {
            resultados[0] += numeros[i];
        } else if (numeros[i] < 0) {
            resultados[1] += numeros[i];
        }
    }
}

int main() {
    int numeros[6] = {-1, -2, -3, 0, 1, 2};
    int resultados[2];

    sumarPositivosNegativos(numeros, 6, resultados);

    assert(resultados[0] == 3);
    assert(resultados[1] == -6);
    cout << "va bien" << endl;
    return 0;
}
