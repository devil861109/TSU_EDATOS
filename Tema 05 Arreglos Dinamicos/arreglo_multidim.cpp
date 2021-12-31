#include <iostream>

using namespace std;

int main() {
	int ***matriz, n, m, o, l;

	cout << "Dame n" << endl;
	cin >> n;
	cout << "Dame m" << endl;
	cin >> m;
	cout << "Dame o" << endl;
	cin >> o;

	//asignar memoria
	matriz = new int **[n];

	//crear m con respecto de n
	for(int i = 0; i < n; i++){
		matriz[i] = new int *[m];
	}
	//crear o con respecto de m y n
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			matriz[i][j] = new int [o];
		}
	}

	//escribir en el arreglo
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			for(int k = 0; k < o; k++){
				cout << "Dame valor\n";
				cin >> matriz[i][j][k];
			}
		}
	}
	cout << endl;
	cout << endl;
	//imprimir el arreglo
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			for(int k = 0; k < o; k++){
				cout << matriz[i][j][k];
			}
		}
		cout << endl;
	}

	//desalojar memoria
	//NULL
	if (matriz != NULL){
		for (int i = 0; i<n; i++){
			if (matriz[i] != NULL){
				for (int j = 0; j<m; j++){
					if (matriz[i][j] != NULL){
						delete [] matriz[i][j];
					}
				}
				delete [] matriz[i];
			}
		}
		delete [] matriz;
	}
	return 0;
}