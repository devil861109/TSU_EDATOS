#include <iostream>

using namespace std;

void funcion(void); /* prototipo */

int num=5; /* variable global */

int main() {
	int num=10; /* variable local */
	cout << num << endl;
	funcion(); /* llamada */
	return 0;
}

void funcion(void) {
	cout << num << endl;
}
