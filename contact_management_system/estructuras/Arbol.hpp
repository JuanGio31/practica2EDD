//
// Created by giovanic on 2/04/24.
//

#ifndef CONTACT_ARBOL_HPP
#define CONTACT_ARBOL_HPP

#include "iostream"

using namespace std;

class Nodo {
public:
    string dato;
    Nodo *izquierdo;
    Nodo *derecho;

    Nodo() {}
};

class Arbol {
public:
    Nodo *raiz = NULL;

    int getValorInt(string string1) {
        int temp = 0;
        for (int i = 0; i < string1.length(); ++i) {
            temp += string1[i];
        }
        return temp;
    }

    Nodo *crearNodo(string n) {
        Nodo *nuevo = new Nodo();
        nuevo->dato = n;
        nuevo->derecho = NULL;
        nuevo->izquierdo = NULL;
        return nuevo;
    }

    void insertarNodo(Nodo *&arbol, string n) {
        if (arbol == NULL) {
            Nodo *nuevo = crearNodo(n);
            arbol = nuevo;
        } else {
            int valorRaiz = getValorInt(arbol->dato);
            if (getValorInt(n) < valorRaiz) {
                insertarNodo(arbol->izquierdo, n);
            } else {
                insertarNodo(arbol->derecho, n);
            }
        }
    }

    void mostrarArbol(Nodo *arbol, int cont) {
        if (arbol == NULL) {
            return;
        } else {
            mostrarArbol(arbol->derecho, cont + 1);
            for (int i = 0; i < cont; ++i) {
                cout << "   ";
            }
            cout << arbol->dato << endl;
            mostrarArbol(arbol->izquierdo, cont + 1);
        }
    }

    bool busqueda(Nodo *arbol, string n) {
        if (arbol == NULL) {
            return false;
        } else if (arbol->dato == n) {
            return true;
        } else if (getValorInt(n) < getValorInt(arbol->dato)) {
            return busqueda(arbol->izquierdo, n);
        } else {
            return busqueda(arbol->derecho, n);
        }
    }

    void preOrden(Nodo *arbol) {
        if (arbol == NULL) {
            return;
        } else {
            cout << arbol->dato << " - ";
            preOrden(arbol->izquierdo);
            preOrden(arbol->derecho);
        }
    }

    void inOrden(Nodo *arbol) {
        if (arbol == NULL) {
            return;
        } else {
            inOrden(arbol->izquierdo);
            cout << arbol->dato << " - ";
            inOrden(arbol->derecho);
        }
    }

    void postOrden(Nodo *arbol) {
        if (arbol == NULL) {
            return;
        } else {
            postOrden(arbol->izquierdo);
            postOrden(arbol->derecho);
            cout << arbol->dato << " - ";
        }
    }
};

#endif //CONTACT_ARBOL_HPP
