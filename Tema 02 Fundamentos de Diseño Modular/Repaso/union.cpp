#include <iostream>

using namespace std;

union persona{
	char nombre[25];
	int edad;
	float salario;
} empleado;

void main ( ) {
	cout << "Introducir nombre: ";
	cin >> empleado.nombre;
	cout << "Introducir edad: ";
	cin >> empleado.edad;
	cout << "Introducir salario: ";
	cin >> empleado.salario;
	/*Recuperando informacion de la variable empleado*/
	cout << "Nombre " << empleado.nombre << endl;
	cout << "Edad " << empleado.edad << endl;
	cout << "Salario " << empleado.salario << endl;
}
