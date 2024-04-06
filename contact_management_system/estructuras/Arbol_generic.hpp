//
// Created by giovanic on 5/04/24.
//

#ifndef CONTACT_ARBOL_GENERIC_HPP
#define CONTACT_ARBOL_GENERIC_HPP

#include "iostream"

using namespace std;

template<typename T>
class nodo_avl {
private:
    T dato;
public:
    nodo_avl<T> *izq;
    nodo_avl<T> *der;

    T getDato() { return dato; }

    explicit nodo_avl(T dato) : dato(dato) {}

    virtual ~nodo_avl() = default;
};

template<typename T>
class Arbol_generic {
private:
    nodo_avl<T> *raiz = NULL;

    long getValorInt(string string1) {
        long temp = 0;
        for (int i = 0; i < string1.length(); ++i) {
            temp += string1[i];
        }
        return temp;
    }

    nodo_avl<T> *rotacionII(nodo_avl<T> *n, nodo_avl<T> *n1) {
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

    nodo_avl<T> *rotacionDD(nodo_avl<T> *n, nodo_avl<T> *n1) {
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

    nodo_avl<T> *rotacionDI(nodo_avl<T> *n, nodo_avl<T> *n1) {
        nodo_avl<T> *n2;
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

    nodo_avl<T> *rotacionID(nodo_avl<T> *n, nodo_avl<T> *n1) {
        nodo_avl<T> *n2;
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

    nodo_avl<T> *crearNodo(T n) {
        auto *nuevo = new nodo_avl(n);
        nuevo->derecho = NULL;
        nuevo->izquierdo = NULL;
        return nuevo;
    }

public:
    void insertarNodo(nodo_avl<T> *&arbol, T n) {
        if (arbol == NULL) {
            auto *nuevo = crearNodo(n);
            arbol = nuevo;
        } else {
            int valorRaiz = getValorInt(n);
            if (getValorInt(n) < valorRaiz) {
                insertarNodo(arbol->izquierdo, n);
            } else {
                insertarNodo(arbol->derecho, n);
            }
        }
    }

    void mostrarArbol(nodo_avl<T> *arbol, int cont) {
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

    bool busqueda(nodo_avl<T> *arbol, T n) {
        if (arbol == NULL) {
            return false;
        } else if (arbol->getDato() == n) {
            return true;
        } else if (getValorInt(n) < getValorInt(arbol->getDato())) {
            return busqueda(arbol->izquierdo, n);
        } else {
            return busqueda(arbol->derecho, n);
        }
    }
};

#endif //CONTACT_ARBOL_GENERIC_HPP
