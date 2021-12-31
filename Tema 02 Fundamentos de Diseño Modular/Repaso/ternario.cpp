#include <iostream>

using namespace std;

int main() {
	int num1=0, num2=0, mayor=0;
	cout << "Introduzca un números entero" << endl;
	cin >> num1;
	cout << "Introduzca un números entero" << endl;
	cin >> num2;
	mayor = (num1 >= num2 ? num1 : num2);
	cout << "El número mayor es " << mayor << endl;

	return 0;
}
