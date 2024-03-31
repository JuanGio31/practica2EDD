//
// Created by giovanic on 30/03/24.
//

#ifndef CONTACT_ARCHIVO_HPP
#define CONTACT_ARCHIVO_HPP

#include <iostream>
#include <fstream>
#include "filesystem"

#define _PATH "../archivos/"

using namespace std;
namespace fs = std::filesystem;

class Archivo {
public:
    Archivo() = default;

    static void crearDirectorio(string &nombre) {
        fs::create_directory(_PATH + nombre);
        //fs::remove(_PATH + nombre);
    }

    static void crearArchivo(string directorio, string nombre, string contenido) {
        string nombreArchivo = _PATH + directorio + "/" + nombre + ".txt";
        ofstream archivo;
        // Abrimos el archivo
        archivo.open(nombreArchivo.c_str(), fstream::out);
        // Y le escribimos redirigiendo
        archivo << contenido;
        archivo << endl;
        // lo cerramos
        archivo.close();
    }
};


#endif //CONTACT_ARCHIVO_HPP
