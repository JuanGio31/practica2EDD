//
// Created by giovanic on 29/03/24.
//

#include "Contacto.hpp"


char Contacto::getCategoria() const {
    return categoria;
}

void Contacto::setCategoria(char categoria) {
    Contacto::categoria = categoria;
}

const string &Contacto::getNombre() const {
    return nombre;
}

void Contacto::setNombre(const string &nombre) {
    Contacto::nombre = nombre;
}

const string &Contacto::getApellido() const {
    return apellido;
}

void Contacto::setApellido(const string &apellido) {
    Contacto::apellido = apellido;
}

const string &Contacto::getApodo() const {
    return apodo;
}

void Contacto::setApodo(const string &apodo) {
    Contacto::apodo = apodo;
}

int Contacto::getCelular() const {
    return celular;
}

void Contacto::setCelular(int celular) {
    Contacto::celular = celular;
}

const string &Contacto::getDireccion() const {
    return direccion;
}

void Contacto::setDireccion(const string &direccion) {
    Contacto::direccion = direccion;
}

const string &Contacto::getCumpleanios() const {
    return cumpleanios;
}

void Contacto::setCumpleanios(const string &cumpleanios) {
    Contacto::cumpleanios = cumpleanios;
}

string Contacto::presentar() {
    string temp;
    if (nombre != " ") {
        temp += nombre + ", ";
    }
    if (apellido != " ") {
        temp += apellido + ", ";
    }
    if (apodo != " ") {
        temp += apodo + ", ";
    }
    if (celular != 0) {
        temp += to_string(celular) + ", ";
    }
    if (direccion != " ") {
        temp += direccion + ", ";
    }
    if (cumpleanios != " ") {
        temp += cumpleanios + ", ";
    }
    if (categoria != ' ') {
        string aux(to_string(categoria) + ". ");
        temp += aux;
    }
    return temp;
}

Contacto::Contacto(const string &nombre, const string &apellido, int celular) : nombre(nombre), apellido(apellido),
                                                                                celular(celular) {}

Contacto::Contacto(const string &nombre, const string &apodo, int celular, const string &cumpleanios) : nombre(nombre),
                                                                                                        apodo(apodo),
                                                                                                        celular(celular),
                                                                                                        cumpleanios(
                                                                                                                cumpleanios) {}

Contacto::Contacto(const string &nombre, int celular, const string &direccion, char categoria) : nombre(nombre),
                                                                                                 celular(celular),
                                                                                                 direccion(direccion),
                                                                                                 categoria(categoria) {}
