// Descripcion: Define una estructura de persona y comprueba si sus miembros pueden comprar alcohol.
// Diseño: lista[Persona] ---> verificar edad ---> mensaje en consola
// ----AUTOR: Kerem Akcan----
// ----FECHA: 04/11/2026----

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    string apellido;
    int edad;
};

int main() {
    vector<Persona> personas = {
        {"Ahmet", "soyad", 20},
        {"Mehmet", "babaci", 15},
        {"Zeynep", "mustafaoglu", 25},
        {"Bulent", "akcan", 60}
    };

    for (const auto& persona : personas) {
        if (persona.edad >= 18) {
            cout << persona.nombre << " " << persona.apellido << ", " << persona.edad << " anos: puede comprar alcohol" << endl;
        } else {
            cout << persona.nombre << " " << persona.apellido << ", " << persona.edad << " anos: no puede comprar alcohol" << endl;
        }
    }
    return 0;
}
