// Descripcion: Funcion que recibe un anio y dice si es bisiesto o no.
// Diseño: anio ---> esBisiesto() ---> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 08/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esBisiesto(int anio) {
    // Es bisiesto si es divisible entre 4, salvo los multiplos de 100 que no lo sean tambien de 400
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int main() {
    assert(esBisiesto(2024) == true);
    assert(esBisiesto(2000) == true);
    assert(esBisiesto(1900) == false);
    assert(esBisiesto(2023) == false);
    cout << "va bien" << endl;
    return 0;
}
