#include <iostream>

#define numNodos 1000

//Estructura nodo
typedef struct hoja {
    int valor;
    struct hoja *siguienteNodoIzquierdo;
    struct hoja *siguienteNodoDerecho;
} Arbol;

void instrucciones();
void insertarNodo(Arbol *ptrRaiz, int valor);
void buscarNodo(Arbol *ptrRaiz, int valor);
void postOrden(Arbol *ptrRaiz);
void preOrden(Arbol *ptrRaiz);
void enOrden(Arbol *ptrRaiz);
Arbol* buscarNodoMax(Arbol *ptrRaiz);
Arbol* buscarNodoMin(Arbol *ptrRaiz);
Arbol* borrarNodo(Arbol *ptrRaiz, int valor);

using namespace std;

int main() {
    int i, item, opcion;
    //Este es el primer nodo que existira en el arbol
    Arbol *ptrRaiz = NULL;
    Arbol *ptrTemp = NULL;
    //Algun numero que no exista en el arbol
    int valSearch = 188;
    /**
    * Esta funcion nos permite crear valores aleatorios
    * Time(NULL) nos permite tener una semilla variable
    * Vamos a crear un arbol inicial
    */
    srand(time(NULL));
    cout << "Los nodos iniciales generados son: " << endl;
    for (i = 1; i <= numNodos; i++) {
        item = rand() % 100000;
        if (i == 3) {
            valSearch = item;
        }
        //printf("%3d", item);
        insertarNodo(ptrRaiz, item);
    }
    cout << endl;
    instrucciones();
    cout << "Escoja una opcion: " << endl;
    cin >> opcion;
    while (opcion != 9) {
        switch (opcion) {
            case 1:
                cout << "Ingresa el nuevo nodo: " << endl;
                cin >> item;
                insertarNodo(ptrRaiz, item);
                break;
            case 2:
                cout << "Ingresa el nodo a eliminar: " << endl;
                cin >> item;
                borrarNodo(ptrRaiz, item);
                break;
            case 3:
                cout << "Ingresa el nodo a buscar: " << endl;
                cin >> item;
                buscarNodo(ptrRaiz, item);
                break;
            case 4:
                buscarNodoMin(ptrRaiz);
                //enOrden(ptrRaiz);
                break;
            case 5:
                buscarNodoMax(ptrRaiz);
                //enOrden(ptrRaiz);
                break;
            case 6:
                cout << "El recorrido preorden es: " << endl;
                preOrden(ptrRaiz);
                cout << endl;
                break;
            case 7:
                cout << "El recorrido orden es: " << endl;
                enOrden(ptrRaiz);
                cout << endl;
                break;
            case 8:
                cout << "El recorrido postorden es: " << endl;
                postOrden(ptrRaiz);
                cout << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
        cout << endl;
        instrucciones();
        cout << "Escoja una opcion:" << endl;
        cin >> opcion;
    }
    return 0;
}

/**
 * instrucciones
 */
void instrucciones() {
    cout << "1.-Insertar un nuevo nodo al arbol" << endl;
    cout << "2.-Eliminar un nodo del arbol" << endl;
    cout << "3.-Buscar un nodo en el arbol" << endl;
    cout << "4.-Buscar el nodo minimo en el arbol" << endl;
    cout << "5.-Buscar el nodo maximo en el arbol" << endl;
    cout << "6.-Imprimir en preorden" << endl;
    cout << "7.-Imprimir en orden" << endl;
    cout << "8.-Imprimir en postorden" << endl;
    cout << "9.-Salir" << endl;
}

/**
 * insertarNodo
 * @param ptrRaiz
 * @param valor
 */
void insertarNodo(Arbol *ptrRaiz, int valor) {
    //Revisar si el arbol esta vacio
    if (ptrRaiz == NULL) {
        ptrRaiz = new Arbol;
        //Si hay memoria, almacenar el nodo
        if (ptrRaiz != NULL) {
            (ptrRaiz)->valor = valor;
            (ptrRaiz)->siguienteNodoDerecho = NULL;
            (ptrRaiz)->siguienteNodoIzquierdo = NULL;
        } else {
            cout << "No hay memoria disponible " << endl;
        }
        //Si no esta vacio el arbol
    } else {
        //Si el valor a insertar es menor al nodo actual
        if (valor < (ptrRaiz)->valor) {
            //Moverse al nodo izquierdo
            insertarNodo(((ptrRaiz)->siguienteNodoIzquierdo), valor);
            //Si el valor a insertar es mayor al nodo actual
        } else if (valor > (ptrRaiz)->valor) {
            //Moverse al nodo derecho
            insertarNodo(((ptrRaiz)->siguienteNodoDerecho), valor);
            //Si es un valor duplicado entonces se ignora (Propiedad ABB)
        } else {
            //printf("<-El nodo esta duplicado\n");
        }
    }
}

/**
 * buscarNodo
 * @param ptrRaiz
 * @param valor
 */
void buscarNodo(Arbol *ptrRaiz, int valor) {
    /*Si el nodo no existe*/
    if (ptrRaiz == NULL) {
        cout << "No existe el valor: " << valor << endl;
        /*Se realiza la busqueda a la derecha*/
    } else if (valor > (ptrRaiz)->valor) {
        return buscarNodo(((ptrRaiz)->siguienteNodoDerecho), valor);
        /*Si el valor es menor al nodo actual, moverse a la izquierda*/
    } else if (valor < (ptrRaiz)->valor) {
        return buscarNodo(((ptrRaiz)->siguienteNodoIzquierdo), valor);
    } else {
        cout << "Se encontro -> " << ptrRaiz->valor << endl;
    }
}

/**
 * postOrden
 * @param ptrRaiz
 */
void postOrden(Arbol *ptrRaiz) {
    if (ptrRaiz != NULL) {
        postOrden(ptrRaiz->siguienteNodoIzquierdo);
        postOrden(ptrRaiz->siguienteNodoDerecho);
        cout << "|" << ptrRaiz->valor << "|" << endl;
    }
}

/**
 * preOrden
 * @param ptrRaiz
 */
void preOrden(Arbol *ptrRaiz) {
    if (ptrRaiz != NULL) {
        cout << "|" << ptrRaiz->valor << "|" << endl;
        preOrden(ptrRaiz->siguienteNodoIzquierdo);
        preOrden(ptrRaiz->siguienteNodoDerecho);
    }
}

/**
 * enOrden
 * @param ptrRaiz
 */
void enOrden(Arbol *ptrRaiz) {
    if (ptrRaiz != NULL) {
        enOrden(ptrRaiz->siguienteNodoIzquierdo);
        cout << "|" << ptrRaiz->valor << "|" << endl;
        enOrden(ptrRaiz->siguienteNodoDerecho);
    }
}

/**
 * buscarNodoMax
 * @param ptrRaiz
 * @return
 */
Arbol* buscarNodoMax(Arbol *ptrRaiz) {
    /*Si el nodo no existe*/
    if (ptrRaiz == NULL) {
        return NULL;
        /*Se realiza la busqueda a la izquierda hasta encontrar el minimo*/
    } else if((ptrRaiz)->siguienteNodoDerecho) {
        buscarNodoMax(((ptrRaiz)->siguienteNodoDerecho));
    } else {
        cout << "El valor maximo es: " << (ptrRaiz)->valor << endl;
    }
    return ptrRaiz;
}

/**
 * buscarNodoMin
 * @param ptrRaiz
 * @return
 */
Arbol* buscarNodoMin(Arbol *ptrRaiz) {
    /*Si el nodo no existe*/
    if (ptrRaiz == NULL) {
        return NULL;
        /*Se realiza la busqueda a la izquierda hasta encontrar el minimo*/
    } else if((ptrRaiz)->siguienteNodoIzquierdo) {
        buscarNodoMin(((ptrRaiz)->siguienteNodoIzquierdo));
    } else {
        cout << "El valor minimo es: " << (ptrRaiz)->valor << endl;
    }
    return ptrRaiz;
}

/**
 * borrarNodo
 * @param ptrRaiz
 * @param valor
 * @return
 */
Arbol* borrarNodo(Arbol *ptrRaiz, int valor) {
    Arbol *ptrTemp;
    /*Si el nodo no existe*/
    if (ptrRaiz == NULL) {
        cout << "No existe el valor: " << valor << endl;
        /*Se realiza la busqueda a la derecha*/
    } else if (valor > (ptrRaiz)->valor) {
        (ptrRaiz)->siguienteNodoDerecho = borrarNodo(((ptrRaiz)->siguienteNodoDerecho), valor);
        /*Si el valor es menor al nodo actual, moverse a la izquierda*/
    } else if (valor < (ptrRaiz)->valor) {
        (ptrRaiz)->siguienteNodoIzquierdo = borrarNodo(((ptrRaiz)->siguienteNodoIzquierdo), valor);
    } else {
        if ((ptrRaiz)->siguienteNodoDerecho && (ptrRaiz)->siguienteNodoIzquierdo) {
            ptrTemp = buscarNodoMin(((ptrRaiz)->siguienteNodoDerecho));
            (ptrRaiz)->valor = (ptrTemp)->valor;
            (ptrRaiz)->siguienteNodoDerecho = borrarNodo(((ptrRaiz)->siguienteNodoDerecho), (ptrRaiz)->valor);
        } else {
            ptrTemp = ptrRaiz;
            if ((ptrRaiz)->siguienteNodoIzquierdo == NULL) {
                ptrRaiz = (ptrRaiz)->siguienteNodoDerecho;
            } else if ((ptrRaiz)->siguienteNodoDerecho == NULL) {
                ptrRaiz = (ptrRaiz)->siguienteNodoIzquierdo;
            } else {
                free(ptrTemp);
            }
        }
    }
    return ptrRaiz;
}