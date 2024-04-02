//
// Created by giovanic on 29/03/24.
//

#ifndef CONTACT_GESTOR_HPP
#define CONTACT_GESTOR_HPP

#include "iostream"
#include "Contacto.hpp"
#include "Grupo.hpp"

using namespace std;

class Gestor {
private:
    string nombre;
    Grupo grupo;

public:
    void agregarContacto(const string &nombreGrupo, const Contacto &contacto) {
        grupo.setNombre(nombreGrupo);
        grupo.agregar(contacto);
    }

    Contacto buscarContacto(string nombreGrupo, string clave);

    void agregarContacto(Contacto contacto);
};


#endif //CONTACT_GESTOR_HPP
