cmake_minimum_required(VERSION 3.27)

project(contact DESCRIPTION "Practica No.2 de estructura de datos, Gestor-Contactos en c++")

set(CMAKE_CXX_STANDARD 17)

add_executable(main.cpp
        lectura/Scan.cpp
        lectura/Scan.hpp
        main.cpp
        lectura/Token.cpp
        lectura/Token.hpp
        lectura/TokenEnum.hpp
        grupo/Contacto.cpp
        grupo/Contacto.hpp
        grupo/Gestor.cpp
        grupo/Gestor.hpp
        estructuras/AVL.cpp
        estructuras/AVL.hpp
        Archivo.hpp)