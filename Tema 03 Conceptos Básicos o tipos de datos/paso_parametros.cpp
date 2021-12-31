#include <iostream>

using namespace std;

struct videojuego {
    char nombre[20];
    float precio;
};

/* prototipos */
void imprimeNombre(char nombre[25]);
void cargaVector(int array[], int n);
void imprimeVector(int array[], int n);
void cargaMatriz(int mat[2][2]);
void imprimeMatriz(int mat[2][2]);
struct videojuego agregaJuego(struct videojuego game) ;
void imprimeJuego(struct videojuego game);

int main() {
    int arreglo_enteros[5];
    int arreglo_matriz[2][2];
    char nombre_propio[25];
    struct videojuego juego;

    cout << "Dame tu nombre:";
    cin >> nombre_propio;
    //invocacion de la funcion
    imprimeNombre(nombre_propio);
    //invocacion de la funcion
    cargaVector(arreglo_enteros, 5);
    imprimeVector(arreglo_enteros, 5);
    //invocacion de la funcion
    cargaMatriz(arreglo_matriz);
    imprimeMatriz(arreglo_matriz);
    //invocacion de la funcion
    juego = agregaJuego(juego);
    imprimeJuego(juego);

    return 0;
}

/* declaracion de la funcion */
void imprimeNombre(char nombre[25]) {
    cout << "El nombre pasado por parametros es: " << nombre << endl;
}

void cargaVector(int array[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "dame valor: ";
        cin >> array[i];
    }
}

void imprimeVector(int array[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << array[i];
    }
}

void cargaMatriz(int mat[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "dame valor: ";
            cin >> mat[i][j];
        }
    }
}

void imprimeMatriz(int mat[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << mat[i][j];
        }
        cout << endl;
    }
}

struct videojuego agregaJuego(struct videojuego game) {
    cout << "Nombre: ";
    cin >> game.nombre;
    cout << "Precio: ";
    cin >> game.precio;
    return game;
}

void imprimeJuego(struct videojuego game) {
    cout << "Nombre: " << game.nombre << endl;
    cout << "Precio: " << game.precio << endl;
}