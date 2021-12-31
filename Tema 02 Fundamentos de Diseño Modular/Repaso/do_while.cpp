#include <iostream>

using namespace std;

void main () {
	float sumaTotal = 0;
	float valor;
	char resp;
	do {
		cout << "Introducir el valor a sumar" << endl;
		cin >> valor;
		sumaTotal += valor;
		cout << "Desea continuar sumando valores (s/n)?: " << endl;
		cin >> resp;
	} while (resp == 's' || resp == 'S');
	cout << "El valor de la suma es " << sumaTotal << endl;
}
