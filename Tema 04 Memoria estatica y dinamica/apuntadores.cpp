#include <iostream>

using namespace std;

int main() {
	//declaracion
	int a, *b;
	int **c;
	int ***d;

	//asignacion
	a = 10;
	b = &a;
	c = &b;

	//impresion
	cout << "La variable a vale: " << a << endl;
	cout << "La variable &a vale: " << &a << endl;
	cout << "La variable b vale: " << b << endl;
	cout << "La variable *b vale: " << *b << endl;
	cout << "La variable &b vale: " << &b << endl;

	cout << "La variable c vale: " << c << endl;
	cout << "La variable *c vale: " << *c << endl;
	cout << "La variable &c vale: " << &c << endl;

	cout << "La variable **c vale: " << **c << endl;
	return 0;
}