#include <iostream>
#include "libreria.hpp"

using namespace std;

int main() {
    int facto = 0;
    int resultado = 0;
    cout << "Dame factorial a sacar: " << endl;
    cin >> facto;
    resultado = factorial(facto);
    cout << "El factorial de " << facto << " es: " << resultado << endl;
    return 0;
}
