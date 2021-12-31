#include <iostream>

using namespace std;

//Aqui va el prototipo
int factorial(int n);

int main () {
	int valor, fact;
	int cont = 0;
	do {
		cout << "Introducir un numero entero positivo (para salir 0)" << endl;
		cin >> valor;
		if (valor>0) {
			fact = factorial (valor);
			cout << "El factorial de " << valor << " es " << factorial << endl;
			cont++;
		}
	} while (valor>0);
	cout << "Han sido calculados " << cont << " valores " << endl;
	
	return 0;
}

int factorial(int n) {
	if (n>1) {
		return n*factorial(n-1);
	} else {
		return 1;
	}
}
