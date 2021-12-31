#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;
    ifstream myfile("C:\\Users\\agrivero\\Documents\\UIA\\GIT\\devcpp\\programas\\ArchivoEjemploRead\\laberinto.txt");
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            cout << line << '\n';
        }
        myfile.close();
    } else cout << "Unable to open file";
    return 0;
}

