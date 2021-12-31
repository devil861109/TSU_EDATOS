#include <iostream>

using namespace std;

void main ( ) {
   float salariobase [12]; /*define un arreglo de 12 elementos reales*/
   int i;
   for (i = 0; i < 12; i++) { /*Inicializa el arreglo con los salarios leidos*/
      cout << "Introducir salario: ";
      cin >> salariobase[i];
   }
   cout << "Listado de salarios" << endl;
   for (i = 0; i < 12; i++) /*Accesa a los elementos del arreglo y los imprime*/
      cout << salariobase[i] << endl;
}
