#include <iostream>

using namespace std;

int main() {
	int i, j, numeros[3][4];
	
	/* guardamos la matriz */
	for (i=0;i<3;i++) {
		for (j=0;j<4;j++) {
			cin >> numeros[i][j];
		}
	}
	
	/* imprimimos la matriz */
	for (i=0;i<3;i++) {
		for (j=0;j<4;j++) {
			cout << numeros[i][j];
		}
	}

	return 0;
}
