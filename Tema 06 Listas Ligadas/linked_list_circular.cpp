#include <iostream>

struct s_caja {
    int elemento;
    s_caja *enlace;
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
            q->enlace = q; // siguiente apunta a la caja actual de q
            if (p == NULL) {
                p = q;
            } // a qui direcciono solo una vez p a la caja de q
            q->enlace = p->enlace; // apunto al mismo lugar donde se encuentran en este momento p y q
            p->enlace = q;           // siguiente apunta a la caja actual de q que es la misma

        };
    } while ( c == 's' || c == 'S' );
    int j=1;
    q = p;
    while (q!= NULL){
        cout << "El elemento " << j << " es: "
             << q->elemento << endl;
        q = q->enlace;
        j++;
    }
    //q = p;
    /*while( p != NULL ) {
        q = p->enlace;
        delete p;
        p = q;
    }*/
    return 0;
}
