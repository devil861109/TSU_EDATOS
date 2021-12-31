#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream outFile;
	string fileName = "text.txt";
	outFile.open(fileName, ios::out);

	if (outFile.is_open()){
		outFile << "Se escribio" << endl;
	} else {
		cout << "No se puede abrir" << endl;
	}
	return 0;
}