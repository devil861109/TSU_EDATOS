#include <iostream>
#include "uia.hpp"

using namespace std;

/* PROTOTIPOS */
bool otra_caja();
equipo *hacer_caja();
void Push( equipo *q );
equipo *Pop();
void ImprimeValores(equipo *p, equipo *q);
void BuscarID(int buscar);
void EliminarElemento(int buscar);

/**
 * Funcion main
 * @return 0
 */
int main() {
    int sel;
    char op;
    int id;
    p = NULL;
    q = NULL;
    //creamos otra caja
    while (otra_caja()) { //true
        //encajamos
        Push(hacer_caja());
    }
    q = p;
    cout << "Que deseas hacer? " << endl;
    cout << "1. Imprimir TODO " << endl;
    cout << "2. Buscar elemento " << endl;
    cout << "3. Eliminar elemento " << endl;
    cin >> sel;
    switch(sel){
        case 1:
            //impresion de las cajas
            ImprimeValores(p, q);
            break;
        case 2:
            cout << "Que caja quieres buscar?" << endl;
            cin >> id;
            BuscarID(id);
            break;
        case 3:
            cout << "Que caja quieres buscar?" << endl;
            cin >> id;
            EliminarElemento(id);
            break;
        default:
            cout << "Opcion no valida chato" << endl;
    }


    q = p;
    //impresion de las cajas
    ImprimeValores(p, q);
    q = p;
    // sacar, usar y desechar
    while( NULL != (q = Pop()) ) {
        delete q;
    };
    return 0;
}
