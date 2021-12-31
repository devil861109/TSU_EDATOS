#include <iostream>

using namespace std;

long int factorial (int n);

int main() {
	int n;
	cout << "Introducir la cantidad entera a la que le queremos hallar el factorial: " << endl;
	cin >> n;
	cout << n << "! = " << factorial(n) << endl;

	return 0;
}

long int factorial (int n) {
	if (n <= 1)
		return(1);
	else
		return(n * factorial (n-1));
}
