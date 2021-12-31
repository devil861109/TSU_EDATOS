#include <iostream>

using namespace std;

void main () {
	int n, m;
	cout << "Introducir el dividendo: " << endl;
	cin >> n;
	cout << "Introducir el divisor: " << endl;
	cin >> m;
	if (n%m == 0) {
    	cout << n << " es divisible por " << m << endl;
	}
}
