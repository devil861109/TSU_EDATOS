#include <iostream>

using namespace std;

int r1, r2, r3;

void pasoValor(int a, int b, int c);
void pasoDire(int *a, int *b, int *c);
void pasoRefe(int &a, int &b, int &c);

int main() {
	int a, b, c;

    cout << "Introduce valor a:";
    cin >> a;

    cout << "Introduce valor b:";
    cin >> b;

    cout << "Introduce valor c:";
    cin >> c;

    pasoValor(a, b, c);

    cout << "Paso de parametros por valor" << endl;
    cout << "El valor de a es: " << r1 << endl;
    cout << "El valor de b es: " << r2 << endl;
    cout << "El valor de c es: " << r3 << endl;

    pasoDire(&a, &b, &c);

    cout << "Paso de parametros por direccion" << endl;
    cout << "El valor de a es: " << r1 << endl;
    cout << "El valor de b es: " << r2 << endl;
    cout << "El valor de c es: " << r3 << endl;


    pasoRefe(a, b, c);

    cout << "Paso de parametros por referencia" << endl;
    cout << "El valor de a es: " << r1 << endl;
    cout << "El valor de b es: " << r2 << endl;
    cout << "El valor de c es: " << r3 << endl;
	return 0;
}

void pasoValor(int a, int b, int c){
    r1 = a;
    r2 = b;
    r3 = c;
}

void pasoDire(int *a, int *b, int *c){
    r1 = *a;
    r2 = *b;
    r3 = *c;
}

void pasoRefe(int &a, int &b, int &c){
    r1 = a;
    r2 = b;
    r3 = c;
}