#include <iostream>

struct s_caja {
    int elemento;
    s_caja *anterior;
    s_caja *siguiente;
};

using namespace std;

int main() {
    s_caja *p, *q;
    int elem;
    char c;
    p = NULL;
    do{
        cout << "Oprime ""S"" si deseas agregar otro elemento \n";
        cin >> c;
        if( c == 's' || c == 'S' ) {
            cout << "dame un número entero: ";
            cin >> elem;
            q = new s_caja;
            q->elemento = elem;
            q->siguiente = p;
            q->anterior = NULL;
            if (p != NULL) {
                p->anterior = q;
            }
            p = q;
        };
    } while ( c == 's' || c == 'S' );
    int j=1;
    q = p;
    while (q!= NULL){
        cout << "El elemento " << j << " es: "
             << q->elemento << endl;
        q = q->siguiente;
        j++;
    }


    while( p != NULL ) {
        q = p->siguiente;
        delete p;
        p = q;
    }
    return 0;
}
