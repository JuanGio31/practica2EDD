//
// Created by giovanic on 30/03/24.
//

#ifndef CONTACT_ARCHIVO_HPP
#define CONTACT_ARCHIVO_HPP

#include <iostream>
#include <filesystem>
#include <fstream>
#include <chrono>

using namespace std;

#define _PATH "../archivos/"

class Archivo {
public:
    Archivo() = default;

    void crearDirectorio(string &nombre) {
        std::string directoryName = _PATH + nombre;
        if (std::filesystem::create_directory(directoryName)) {
            std::cout << "Directorio creado exitosamente: " << directoryName << std::endl;
        } else {
            std::cout << "Error al crear el directorio o el directorio ya existe." << std::endl;
        }
        //fs::remove(_PATH + nombre);
    }

    void crearArchivo(string directorio, string nombre, string contenido) {
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

    void escribirAccion(string accion, string nombre) {
        string nombreArchivo = _PATH + nombre + ".txt";
        ofstream archivo;
        // Abrimos el archivo
        archivo.open(nombreArchivo.c_str(), ios::app);
        // Y le escribimos
        if (archivo.fail()) {
            cout << "No se pudo abrir el archivo" << endl;
        } else {
            auto now = std::chrono::system_clock::now();
            std::time_t end_time = std::chrono::system_clock::to_time_t(now);
            archivo << accion
                    << " | time: "
                    << std::ctime(&end_time);
        }

        // lo cerramos
        archivo.close();
    }
};


#endif //CONTACT_ARCHIVO_HPP
