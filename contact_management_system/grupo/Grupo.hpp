//
// Created by giovanic on 2/04/24.
//

#ifndef CONTACT_GRUPO_HPP
#define CONTACT_GRUPO_HPP

#include <utility>

#include "../estructuras/LD_Generica.hpp"
#include "Contacto.hpp"
#include "../estructuras/Arbol.hpp"
#include "../estructuras/Tabla.hpp"

class Grupo {
private:
    string nombre;
    Tabla<string, Contacto> *contactos = new Tabla<string, Contacto>(30);
public:
     Grupo(const string &n) {
        nombre = n;
    }

    Grupo() = default;

    void agregar(const Contacto &contacto) {
        if (contacto.getNombre() != " ") {
            contactos->insertar(contacto.getNombre(), contacto);
        } else if (contacto.getApellido() != " ") {
            contactos->insertar(contacto.getApellido(), contacto);
        } else if (contacto.getApodo() != " ") {
            contactos->insertar(contacto.getApodo(), contacto);
        }
    }

//    string getContacto(string key) {
//        return contactos->get(key).getApellido();
//    }

    [[nodiscard]] const string &getNombre() const {
        return nombre;
    }

    void setNombre(const string &n) {
        nombre = n;
    }
};

#endif //CONTACT_GRUPO_HPP
