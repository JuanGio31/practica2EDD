//
// Created by giovanic on 2/04/24.
//

#ifndef CONTACT_ARBOL_HPP
#define CONTACT_ARBOL_HPP

#include "iostream"

using namespace std;

struct Nodo {
    int dato;
    Nodo *izquierdo;
    Nodo *derecho;
};

struct Arbol {
    Nodo *raiz = NULL;

    Nodo *crearNodo(int n) {
        Nodo *nuevo = new Nodo();
        nuevo->dato = n;
        nuevo->derecho = NULL;
        nuevo->izquierdo = NULL;
        return nuevo;
    }

    void insertarNodo(Nodo *&arbol, int n) {
        if (arbol == NULL) {
            Nodo *nuevo = crearNodo(n);
            arbol = nuevo;
        } else {
            int valorRaiz = arbol->dato;
            if (n < valorRaiz) {
                insertarNodo(arbol->izquierdo, n);
            } else {
                insertarNodo(arbol->derecho, n);
            }
        }
    }
};

#endif //CONTACT_ARBOL_HPP
