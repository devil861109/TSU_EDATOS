#include <iostream>

using namespace std;

int main() {
	int a = 7;
	float b = 8.2;
	char c = 's';
	
	cout << a << endl;
	//Se visualiza un 7, que es el contenido de la variable a.
	cout << a+b << endl;
	//Se visualiza un 15, ya que es la suma de a + b mostrada como valor entero.
	cout << a+b << endl;
	//Se visualiza un 15.2, ya que es la suma de a + b mostrada como valor real.
	cout << c << endl;
	//Se visualiza la letra 's' que es el contenido de la variable c.
	cout << c << a << b << endl;
	//Se visualiza s 7 8.2 que son los valores de las variables c, a y b respectivamente.
	cout << "HOLA" << endl;
	//Se visualiza la palabra HOLA.

	return 0;
}
