#include <iostream>

#define N 3
#define M 4
#define O 2

using namespace std;

//prototipos
void MatrizEstatica();
void MatrizDinamica();
void ArregloTridimensional();
void ArregloTridimensionalDinamico();

int main() {
	//MatrizEstatica();
	//MatrizDinamica();
	//ArregloTridimensional();
	//ArregloTridimensionalDinamico();
	return 0;
}


void MatrizEstatica() {
    int A[N][M];
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << "introduce el valor de A[" << i << "," << j << "]\n";
            cin >> A[i][j];
        }
    }
    // Desplegar el contenido de la matriz A
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << A[i][j];
        }
        cout << "\n";
    }
}

void MatrizDinamica() {
    int **A;
    int i, j;
    A = new int * [N];
    for (int i = 0; i < N; i++) {
        A[i] = new int [M];
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << "introduce el valor de A[" << i << "," << j << "]\n";
            cin >> A[i][j];
        }
    }
    // Desplegar el contenido de la matriz A
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << A[i][j];
        }
        cout << "\n";
    }
    if (A != NULL) {
        for (i = 0; i < N; i++)
            if (A[i] != NULL)
                delete [] A[i];
        delete [] A;
    }
}

void ArregloTridimensionalDinamico() {
    //creo la matriz
    int ***A;
    int i, j, k;

    //inicializo con apuntadores
    A = new int ** [N];
    for (int i = 0; i < N; i++) {
        A[i] = new int * [M];
        for (int j = 0; j < M; j++) {
            A[i][j] = new int [O];
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            for (k = 0; k < O; k++) {
                cout << "introduce el valor de A[" << i << "," << j << "," << k << "]\n";
                cin >> A[i][j][k];
            }
        }
    }
    // Desplegar el contenido de la matriz A
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            for (k = 0; k < O; k++) {
                cout << A[i][j][k];
            }
            cout << "\n";
        }
        cout << "\n";
        cout << "\n";
    }
    if (A != NULL) {
        for (i = 0; i < N; i++) {
            if (A[i] != NULL) {
                for (j = 0; j < M; j++) {
                    if (A[i][j] != NULL) {
                        delete [] A[i][j];
                    }
                }
                delete [] A[i];
            }
        }
        delete [] A;
    }
}

void ArregloTridimensional() {
    int A[N][M][O];
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            for (k = 0; k < O; k++) {
                cout << "introduce el valor de A[" << i << "," << j << "," << k << "]\n";
                cin >> A[i][j][k];
            }
        }
    }
    // Desplegar el contenido de la matriz A
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            for (k = 0; k < O; k++) {
                cout << A[i][j][k];
            }
            cout << "\n";
        }
    }
}
