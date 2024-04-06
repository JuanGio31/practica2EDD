cmake_minimum_required(VERSION 3.27)

project(contact DESCRIPTION "Practica No.2 de estructura de datos, Gestor-Contactos en c++")

set(CMAKE_CXX_STANDARD 17)

add_executable(main.cpp
        util/Scan.cpp
        util/Scan.hpp
        main.cpp
        util/Token.cpp
        util/Token.hpp
        util/TokenEnum.hpp
        util/Archivo.hpp
        estructuras/Arbol.hpp
        grupo/Contacto.hpp
        util/Parser.hpp
        grupo/Contacto.cpp
        estructuras/LD_Generica.hpp
        grupo/Gestor.hpp
        grupo/Grupo.hpp
        estructuras/Tabla.hpp
        estructuras/Arbol_generic.hpp
)