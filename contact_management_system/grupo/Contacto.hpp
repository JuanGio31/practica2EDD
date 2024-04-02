//
// Created by giovanic on 29/03/24.
//

#ifndef CONTACT_CONTACTO_HPP
#define CONTACT_CONTACTO_HPP

#include "iostream"
#include "../estructuras/LD_Generica.hpp"

using namespace std;

class Contacto {
private:
    string nombre;
    string apellido;
    string apodo;
    int celular;
    string direccion;
    string cumpleanios;
    char categoria;

public:
    Contacto() {
        nombre = " ";
        apellido = " ";
        apodo = " ";
        celular = 0;
        direccion = " ";
        cumpleanios = " ";
        categoria = ' ';
    }

    Contacto(const string &nombre, const string &apellido, int celular);

    Contacto(const string &nombre, const string &apodo, int celular, const string &cumpleanios);

    Contacto(const string &nombre, int celular, const string &direccion, char categoria);

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

    char getCategoria() const;

    void setCategoria(char categoria);

    string presentar();

    string indicador() {
        if (nombre != " ") {
            return nombre;
        } else if (apellido != " ") {
            return apellido;
        } else {
            return apodo;
        }
    }
};


#endif //CONTACT_CONTACTO_HPP
