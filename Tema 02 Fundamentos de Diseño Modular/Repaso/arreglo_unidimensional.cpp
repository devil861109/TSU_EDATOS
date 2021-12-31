#include <iostream>

using namespace std;

int main() {
	int i, numeros[5];
	
	/* guardamos la matriz */
	for (i=0;i<5;i++) {
		cin >> numeros[i];
	}
	
	/* imprimimos la matriz */
	for (i=0;i<3;i++) {
		cout << numeros[i];
	}

	return 0;
}
