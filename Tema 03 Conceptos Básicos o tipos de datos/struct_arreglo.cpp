#include <iostream>

using namespace std;

struct persona{
	char nombre[25];
	int edad;
	float salario;
} empleado[5];

void main ( ) {
	/* guardar arreglo */
	for (int i =0; i < 5; i++) {
		cout << "Introducir nombre: ";
		cin >> empleado[i].nombre;
		cout << "Introducir edad: ";
		cin >> empleado[i].edad;
		cout << "Introducir salario: ";
		cin >> empleado[i].salario;
	}

	/* imprimir arreglo */
	for (int i =0; i < 5; i++) {
		cout << "Nombre " << empleado[i].nombre << endl;
		cout << "Edad " << empleado[i].edad << endl;
		cout << "Salario " << empleado[i].salario << endl;
	}

}
