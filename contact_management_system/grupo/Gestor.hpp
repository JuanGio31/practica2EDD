//
// Created by giovanic on 29/03/24.
//

#ifndef CONTACT_GESTOR_HPP
#define CONTACT_GESTOR_HPP

#include "iostream"
#include "Contacto.hpp"

using namespace std;

class Gestor {
private:
    string nombre;
    //Lista<Contacto>

public:
    void agregarContacto(string nombreGrupo, Contacto contacto);

    Contacto buscarContacto(string nombreGrupo, string clave);

    void agregarContacto(Contacto contacto);
};


#endif //CONTACT_GESTOR_HPP
