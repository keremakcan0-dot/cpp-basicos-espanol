// Descripcion: Version con entrada de consola para comprobar si un numero es divisor de otro.
// Diseño: num1, num2 ---> esDivisor() ---> V o F
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
using namespace std;

bool esDivisor(int num1, int num2) {
    if (num1 == 0 || num2 == 0) return false;
    return num1 % num2 == 0 || num2 % num1 == 0;
}

int main() {
    int num1, num2;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    cout << "Resultado (1=Verdadero, 0=Falso): " << esDivisor(num1, num2) << endl;
    return 0;
}
