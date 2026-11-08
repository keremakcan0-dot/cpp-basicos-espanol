// Descripcion: Busca el mayor de los negativos y el menor de los positivos de una lista de reales (hay al menos uno de cada tipo).
// Diseño: lista[R] ---> mayorNegativoMenorPositivo() ---> resultado[2] (mayor negativo, menor positivo)
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void mayorNegativoMenorPositivo(const double numeros[], int cuantos, double resultado[]) {
    bool hayNegativo = false;
    bool hayPositivo = false;

    for (int i = 0; i < cuantos; i++) {
        if (numeros[i] < 0 && (!hayNegativo || numeros[i] > resultado[0])) {
            resultado[0] = numeros[i];
            hayNegativo = true;
        }
        if (numeros[i] > 0 && (!hayPositivo || numeros[i] < resultado[1])) {
            resultado[1] = numeros[i];
            hayPositivo = true;
        }
    }
}

int main() {
    double numeros[7] = {-1, -2, -3, 0, 1, 2, 3};
    double resultado[2];

    mayorNegativoMenorPositivo(numeros, 7, resultado);
    assert(resultado[0] == -1);
    assert(resultado[1] == 1);

    double otros[4] = {5.5, -0.5, 2.5, -4};
    mayorNegativoMenorPositivo(otros, 4, resultado);
    assert(resultado[0] == -0.5);
    assert(resultado[1] == 2.5);

    cout << "va bien" << endl;
    return 0;
}
