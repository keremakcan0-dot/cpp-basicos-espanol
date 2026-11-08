// Descripcion: Genera una sucesion donde cada termino es la suma de los dos anteriores (similar a Fibonacci).
// Diseño: x:R, y:R, n:N ---> calcularSucesion() ---> lista[R]
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <cassert>
using namespace std;

void calcularSucesion(double x, double y, int n, double lista[]) {
    if (n > 0) lista[0] = x;
    if (n > 1) lista[1] = y;
    
    for (int i = 2; i < n; i++) {
        lista[i] = lista[i - 1] + lista[i - 2];
    }
}

int main() {
    double lista[20];
    
    // Sucesion para x=2, y=4, n=8:
    // 2, 4, 6, 10, 16, 26, 42, 68
    calcularSucesion(2, 4, 8, lista);
    
    assert(lista[0] == 2);
    assert(lista[1] == 4);
    assert(lista[7] == 68);
    
    cout << "va bien" << endl;
    return 0;
}
