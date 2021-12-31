#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, ne = 0;
	float edad, sumaEdad = 0;
	float peso, sumaPeso = 0, mediaEdad = 0, mediaPeso = 0;
	cout << "Introducir cantidad de estudiantes a procesar: " << endl;
	cin >> n;
	while (ne < n) {
		ne++;
		cout << "Introducir EDAD del estudiante " << ne << ": "<< endl;
		cin >> edad;
		cout << "Introducir PESO del estudiante " << ne << ": " << endl;
		cin >> peso;
		sumaEdad = sumaEdad + edad;
		sumaPeso = sumaPeso + peso;
	}
	mediaEdad = sumaEdad/n;
	mediaPeso = sumaPeso/n;
	cout << "La edad promedio es " << mediaEdad << endl;
	cout << "El peso promedio es " << mediaPeso << endl;
	
	return 0;
}
