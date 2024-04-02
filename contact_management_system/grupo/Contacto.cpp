//
// Created by giovanic on 29/03/24.
//

#include "Contacto.hpp"

const string &Contacto::getNombre() const {
    return nombre;
}

void Contacto::setNombre(const string &str) {
    Contacto::nombre = str;
}

const string &Contacto::getApellido() const {
    return apellido;
}

void Contacto::setApellido(const string &str) {
    Contacto::apellido = str;
}

const string &Contacto::getApodo() const {
    return apodo;
}

void Contacto::setApodo(const string &str) {
    Contacto::apodo = str;
}

int Contacto::getCelular() const {
    return celular;
}

void Contacto::setCelular(int numero) {
    Contacto::celular = numero;
}

const string &Contacto::getDireccion() const {
    return direccion;
}

void Contacto::setDireccion(const string &str) {
    Contacto::direccion = str;
}

const string &Contacto::getCumpleanios() const {
    return cumpleanios;
}

void Contacto::setCumpleanios(const string &fecha) {
    Contacto::cumpleanios = fecha;
}
