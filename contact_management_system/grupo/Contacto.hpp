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
    [[nodiscard]] const string &getNombre() const;

    void setNombre(const string &str);

    [[nodiscard]] const string &getApellido() const;

    void setApellido(const string &str);

    [[nodiscard]] const string &getApodo() const;

    void setApodo(const string &str);

    [[nodiscard]] int getCelular() const;

    void setCelular(int numero);

    [[nodiscard]] const string &getDireccion() const;

    void setDireccion(const string &str);

    [[nodiscard]] const string &getCumpleanios() const;

    void setCumpleanios(const string &fecha);
};


#endif //CONTACT_CONTACTO_HPP
