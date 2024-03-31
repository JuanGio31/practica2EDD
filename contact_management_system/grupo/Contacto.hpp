//
// Created by giovanic on 29/03/24.
//

#ifndef CONTACT_CONTACTO_HPP
#define CONTACT_CONTACTO_HPP

#include "iostream"

using namespace std;

class Contacto {
private:
    string nombre;
    string apellido;
    string apodo;
    int celular;
    string direccion;
    string cumpleanios;

public:
    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getApellido() const;

    void setApellido(const string &apellido);

    const string &getApodo() const;

    void setApodo(const string &apodo);

    int getCelular() const;

    void setCelular(int celular);

    const string &getDireccion() const;

    void setDireccion(const string &direccion);

    const string &getCumpleanios() const;

    void setCumpleanios(const string &cumpleanios);
};


#endif //CONTACT_CONTACTO_HPP
