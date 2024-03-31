//
// Created by giovanic on 29/03/24.
//

#include "Contacto.hpp"

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
