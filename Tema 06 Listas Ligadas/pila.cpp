#include <iostream>

using namespace std;

struct jugador {
	char nombre[25];
	int numero;
	int equipo;
	jugador *link;
};

bool otra_caja();

jugador *hacer_caja();

void Push(jugador *q);

jugador *Pop();

jugador *p,*q;

int main() {
	int jug;
	char c;
	//conservar un apuntador hacia el inicio de la lista

	p = NULL;

	while(otra_caja()){
		//hacer caja
		//funcion anidada
		Push(hacer_caja());
	}

	int j=1;
	q = p;
	//recorre la lista de la ultima caja creada hasta NULL
	while (q!= NULL){
		cout << "El elemento " << j << " es: " << q->nombre << endl;
		//efecto de recorrer la lista!!!
		q = q->link;
		j++;
	};

	while( NULL != (q = Pop()) ){
		delete q;
	};

	return 0;
}

// como es tipo bool, regresa true o false
bool otra_caja(){
    char c;
    cout << "\n Desea introducir los datos de otro jugador?\n";
    cin >> c;
    return c == 's' || c == 'S';
    //true o false
}


jugador *hacer_caja(){
    q = new jugador;
    if(q == NULL){
        return NULL;
    }
    cout << "Dame nombre\n";
    cin >> q->nombre;
    cout << "Dame numero\n";
    cin >> q->numero;
    cout << "Dame equipo\n";
    cin >> q->equipo;
    return q;
}

void Push(jugador *q){
    if( q == NULL ){
        return;
    }
    q->link = p;
    p = q;
}

jugador *Pop(){
    q = p;
    if (p != NULL)
        p = p->link;
    return q;
}