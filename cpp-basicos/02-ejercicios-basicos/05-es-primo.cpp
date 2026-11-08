// Descripcion: Funcion que recibe un numero y dice si es primo.
// Diseño: Numero ---> esPrimo() ---> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    assert(esPrimo(5) == true);
    assert(esPrimo(2) == true);
    assert(esPrimo(9) == false);
    assert(esPrimo(1) == false);
    assert(esPrimo(0) == false);
    cout << "va bien" << endl;
    return 0;
}
