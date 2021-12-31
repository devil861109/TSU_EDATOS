//
// Created by AR on 2/28/2020.
//
#include <iostream>

using namespace std;

#ifndef ESTRUCTURAANIDADA_UIA_HPP
#define ESTRUCTURAANIDADA_UIA_HPP

//estructura jugador
struct jugador {
    char nombre[30];
    int numero;
};

//estrcutura equipo
struct equipo {
    int ID;
    char nombre[30];
    int tot_jug;
    jugador *jug;
    equipo *link;
};

//Apuntadores de mis cajas de tipo global
struct equipo *p, *q;

/**
 * Preguntamos si deseamos crear una caja
 * @return
 */
bool otra_caja() {
    char c;
    cout << "\n Otra caja? ";
    cin >> c;
    return c == 's' || c == 'S';
}

/**
 * Aqui se construye la caja y se agregan los valores de la caja
 *
 * @return
 */
equipo *hacer_caja() {
    // aloja memoria
    equipo *q;
    q = new equipo;
    if (q == NULL)
        return NULL;
    // pide los datos
    q = new equipo;
    cout << "ID: " << endl;
    cin >> q->ID;
    cout << "Nombre del equipo: " << endl;
    cin >> q->nombre;
    cout << "Total de jugadores (3): " << endl;
    cin >> q->tot_jug; //3
    q->jug = new jugador[q->tot_jug];
    for (int j = 0; j < q->tot_jug; ++j) {
        cout << "Nombre del jugador: " << endl;
        cin >> q->jug[j].nombre;
        cout << "Numero del jugador: " << endl;
        cin >> q->jug[j].numero;
    }
    return q;
}

/**
 * PUSH
 * Manda una caja ya creada en memoria a la PILA
 * @param q
 */
void Push( equipo *q ) {
    if( q == NULL )
        return;
    // “empuja” una caja
    q->link = p;
    p = q;
}

/**
 * POP
 * Funcion que nos deja preparada la caja para antes de la eliminacion
 * En pocas palabras, esta funcion, desenchufa los apuntadores entre las cajas
 *
 * @return
 */
equipo *Pop() {
    // saca una caja
    equipo *p;
    p = q;
    if (q != NULL)
        q = q->link;
    return p;
}

void ImprimeValores(equipo *p, equipo *q) {
    q = p;
    //recorre la lista de la ultima caja creada hasta NULL
    while (q!= NULL){
        // trabajar con la caja
        cout << "ID: " << q->ID << endl;
        cout << "Equipo: " << q->nombre << endl;
        cout << "Total Jugadores: " << q->tot_jug << endl;
        for (int i = 0; i < q->tot_jug; ++i) {
            cout << "\tNombre: " << q->jug[i].nombre << endl;
            cout << "\tNumero: " << q->jug[i].numero << endl;
        }
        q = q->link;
    };
}

void BuscarID(int buscar) {
    q = p;
    //recorre la lista de la ultima caja creada hasta NULL
    while (q!= NULL) {
        // trabajar con la caja
        if (q->ID == buscar) {
            cout << "Equipo: " << q->nombre << endl;
            cout << "Total Jugadores: " << q->tot_jug << endl;
            for (int i = 0; i < q->tot_jug; ++i) {
                cout << "\tNombre: " << q->jug[i].nombre << endl;
                cout << "\tNumero: " << q->jug[i].numero << endl;
            }
        }
        q = q->link;
    };
}

void EliminarElemento(int buscar) {
    q = p;
    //recorre la lista de la ultima caja creada hasta NULL
    while(q != NULL) {
        if (q->ID == buscar) {
            //ALGOOOOO
            q = Pop();
            delete q;
            //TRUENAAA
        }
    }
}

#endif //ESTRUCTURAANIDADA_UIA_HPP
