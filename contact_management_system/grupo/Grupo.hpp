//
// Created by giovanic on 2/04/24.
//

#ifndef CONTACT_GRUPO_HPP
#define CONTACT_GRUPO_HPP

#include <utility>

#include "../estructuras/LD_Generica.hpp"
#include "Contacto.hpp"
#include "../estructuras/Arbol.hpp"

class Grupo {
private:
    string nombre;
    Arbol *gestion = new Arbol();
public:
    Grupo(const string &n) {
        nombre = n;
    }

    void agregar(const Contacto &contacto) {
        if (contacto.getNombre() != " ") {
            gestion->insertarNodo(gestion->raiz, contacto, gestion->raiz->dato.getNombre());
        } else if (contacto.getApellido() != " ") {
            gestion->insertarNodo(gestion->raiz, contacto, gestion->raiz->dato.getApellido());
        } else if (contacto.getApodo() != " ") {
            gestion->insertarNodo(gestion->raiz, contacto, gestion->raiz->dato.getApodo());
        }
    }


    [[nodiscard]] const string &getNombre() const {
        return nombre;
    }

    void setNombre(const string &n) {
        nombre = n;
    }
};

#endif //CONTACT_GRUPO_HPP
