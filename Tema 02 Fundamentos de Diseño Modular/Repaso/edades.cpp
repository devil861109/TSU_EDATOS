#include <iostream>

using namespace std;

void main () {
	int edadJuan = 20;
	int edadJose = 18;
	if (edadJuan < edadJose) {
		cout << "Juan es mas joven que Jose" << endl;
	} else {
		if (edadJuan == edadJose)
			cout << "Juan tiene la misma edad que Jose" << endl;
		else
			cout << "Juan es mayor que Jose" << endl;
	}
}
