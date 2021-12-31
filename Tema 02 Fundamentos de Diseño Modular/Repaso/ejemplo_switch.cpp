#include <iostream>

using namespace std;

void main () {
	int seleccion;
	cout << "Introduzca: " << endl;
	cout << "1: para cambio de NIP " << endl;
	cout << "2: para operaciones entre cuentas propias " << endl;
	cout << "3: para operaciones con cuentas de terceros " << endl;
	cout << "4: para operaciones con cuentas de otros bancos " << endl;
	cout << "5: para pago de servicios " << endl;
	cin >> seleccion;
	switch (seleccion) {
		case 1:
			cambioNIP ( );
			break;
		case 2:
			opCuentasPropias ( );
			break;
		case 3:
			opCuentasTerceros ( );
			break;
		case 4:
			opCuentasOtrosBancos ( );
			break;
		case 5:
			pagoServicios ( );
			break;
		default: 
			cout << "Rango no admitido" << endl;
			break;
	}
}
