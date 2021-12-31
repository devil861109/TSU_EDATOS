#include <iostream>

using namespace std;

struct materia {
    char nombre[25];
    float calif;
};

struct alumno{
    char matricula[25];
    char nombre[25];
    struct materia calificaciones[5];
};

int main() {
    struct alumno grupoA[2];

    //agregar valores
    for (int i = 0; i < 5; ++i) {
        cout << "Dame matricula de alumno: ";
        cion >> grupoA[i].matricula;
        cout << "Dame nombre de alumno: ";
        cin >> grupoA[i].nombre;
        cout << "Dame calificaciones de alumno:" << endl;
        for (int j = 0; j < 5; ++j) {
            cout << "\tMateria: ";
            cin >> grupoA[i].calificaciones[j].nombre;
            cout << "\tCalificacion: ";
            cin >> grupoA[i].calificaciones[j].calif;
        }
    }

    //imprimir valores
    for (int i = 0; i < 5; ++i) {
        cout << "Matricula de alumno: " << grupoA[i].matricula << endl;
        cout << "Nombre de alumno: " << grupoA[i].nombre;
        cout << "Calificaciones de alumno:" << endl;
        for (int j = 0; j < 5; ++j) {
            cout << "\tMateria: " << grupoA[i].calificaciones[j].nombre << endl;
            cout << "\tCalificacion: " << grupoA[i].calificaciones[j].calif << endl;
        }
        cout << endl;
    }
    return 0;
}
