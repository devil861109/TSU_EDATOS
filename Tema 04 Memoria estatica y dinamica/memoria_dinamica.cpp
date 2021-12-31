#include <iostream>

using namespace std;

int main() {
	//declarar arreglo de int de forma dinamica
	int *array;
	int num;

	cout << "Hola, cuants numeros quieres agregar?";
	cin >> num;

	//alojamiento de memoria de tamanio num
	array = new int[num];

	//insertar valores
	for (int i = 0; i<num; i++){
		cout << "Dame valor \n";
		cin >> array[i];
	}

	cout << endl;

	//escribir valores
	for (int i = 0; i<num; i++){
		cout << array[i] << endl;
	}

	//desalojar memoria
	delete [] array;
	return 0;
}