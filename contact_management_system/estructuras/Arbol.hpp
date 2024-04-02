//
// Created by giovanic on 2/04/24.
//

#ifndef CONTACT_ARBOL_HPP
#define CONTACT_ARBOL_HPP

#include "iostream"
#include "../grupo/Contacto.hpp"

using namespace std;

class Nodo {
public:
    Contacto dato;
    Nodo *izquierdo;
    Nodo *derecho;
    int fe;

    Nodo() {}

    virtual ~Nodo() { delete this; }
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

    Nodo *rotacionII(Nodo *n, Nodo *n1) {
        n->izquierdo = n1->derecho;
        n1->derecho = n;
        // actualización de los factores de equilibrio
        if (n1->fe == -1) // la condición es true en la inserción
        {
            n->fe = 0;
            n1->fe = 0;
        } else {
            n->fe = -1;
        }
        n1->fe = 1;
        return n1;
    }

    Nodo *rotacionDD(Nodo *n, Nodo *n1) {
        n->derecho = n1->izquierdo;
        n1->izquierdo = n;// actualización de los factores de equilibrio
        if (n1->fe == +1) // la condición es true en la inserción
        {
            n->fe = 0;
            n1->fe = 0;
        } else {
            n->fe = 1;
            n1->fe = -1;
        }
        return n1;
    }

    Nodo *rotacionDI(Nodo *n, Nodo *n1) {
        Nodo *n2;
        n2 = n1->izquierdo;
        n->derecho = n2->izquierdo;
        n2->izquierdo = n;
        n1->izquierdo = n2->derecho;
        n2->derecho = n1;
// actualización de los factores de equilibrio
        if (n2->fe == +1)
            n->fe = -1;
        else
            n->fe = 0;
        if (n2->fe == -1)
            n1->fe = +1;
        else
            n1->fe = 0;
        n2->fe = 0;
        return n2;
    }

    Nodo *rotacionID(Nodo *n, Nodo *n1) {
        Nodo *n2;
        n2 = n1->derecho;
        n->izquierdo = n2->derecho;
        n2->derecho = n;
        n1->derecho = n2->izquierdo;
        n2->izquierdo = n1;
// actualización de los factores de equilibrio
        if (n2->fe == +1) {
            n1->fe = -1;
        } else {
            n1->fe = 0;
        }
        if (n2->fe == -1) {
            n->fe = 1;
        } else {
            n->fe = 0;
        }
        n2->fe = 0;
        return n2;
    }

    Nodo *crearNodo(Contacto n) {
        Nodo *nuevo = new Nodo();
        nuevo->dato = n;
        nuevo->derecho = NULL;
        nuevo->izquierdo = NULL;
        return nuevo;
    }

    void insertarNodo(Nodo *&arbol, Contacto n, string val) {
        if (arbol == NULL) {
            Nodo *nuevo = crearNodo(n);
            arbol = nuevo;
        } else {
            int valorRaiz = getValorInt(val);
            if (getValorInt(n.indicador()) < valorRaiz) {
                insertarNodo(arbol->izquierdo, n, val);
            } else {
                insertarNodo(arbol->derecho, n, val);
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
            cout << arbol->dato.presentar() << endl;
            mostrarArbol(arbol->izquierdo, cont + 1);
        }
    }

    bool busqueda(Nodo *arbol, string n, string val) {
        if (arbol == NULL) {
            return false;
        } else if (val == n) {
            return true;
        } else if (getValorInt(n) < getValorInt(val)) {
            return busqueda(arbol->izquierdo, n, val);
        } else {
            return busqueda(arbol->derecho, n, val);
        }
    }

    void preOrden(Nodo *arbol, string val) {
        if (arbol == NULL) {
            return;
        } else {
            cout << val << " - ";
            preOrden(arbol->izquierdo, val);
            preOrden(arbol->derecho, val);
        }
    }

    void inOrden(Nodo *arbol, string val) {
        if (arbol == NULL) {
            return;
        } else {
            inOrden(arbol->izquierdo, val);
            cout << val << " - ";
            inOrden(arbol->derecho, val);
        }
    }

    void postOrden(Nodo *arbol, string val) {
        if (arbol == NULL) {
            return;
        } else {
            postOrden(arbol->izquierdo, val);
            postOrden(arbol->derecho, val);
            cout << val << " - ";
        }
    }
};

#endif //CONTACT_ARBOL_HPP
