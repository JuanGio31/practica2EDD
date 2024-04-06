#include <bits/stdc++.h>

#include <string>
#include "util/Scan.hpp"
#include "util/Token.hpp"
#include "util/Archivo.hpp"
#include "estructuras/Tabla.hpp"
#include "util/Parser.hpp"

using namespace std;

void getMenu();

void getMenuComando();

void print(std::vector<string> const &input) {
    for (const auto &i: input) {
        cout << i << " ";
    }
}

void printf(std::vector<Token> const &input) {
    for (Token i: input) {
        cout << i.getToken() << '\n';
    }
}

int main() {
    cout << endl;
    //Scan escaner;

//    escaner.analizar("ADD CONTACT IN amigos FIELDS (Pedro, Alvarez, 12345678, 02-05-1998)");
//    escaner.analizar("ADD NEW-GROUP clientes FIELDS (nombre STRING, apellido STRING, celular INTEGER) ORDER apellido;");
//    escaner.analizar("ADD NEW-GROUP friends FIELDS (nombre STRING, apodo STRING, celular INTEGER, cumpleanios DATE) ORDER cumpleanios;");
//    escaner.analizar("FIND CONTACT IN clientes CONTACT-FIELD apellido=alvarez;");
//
//    escaner.analizar(
//            "ADD NEW-GROUP proveedores FIELDS (empresa STRING, direccion STRING, tel1 INTEGER, categoria CHAR) ORDER tel1;");
//    print(escaner.getSymbol());
//    cout << endl << endl;
//    printf(escaner.getToken());
    getMenu();
    return 0;
}

void getMenu() {
    string contenido = "********* GESTION DE CONTACTOS *********\n"
                       "1. COMANDOS.\n"
                       "2. RESPORTES.\n"
                       "3. GRAFICAS DE LAS ESTRUCTURAS.\n"
                       "4. EXPORTACION DE CONTACTOS.\n"
                       "5. SALIR.\n"
                       "***************************************\n"
                       "\nSELECCIONE UNA OPCION > ";
    int opcion = 0;
    do {
        cout << contenido;
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "\nCOMANDOS" << endl;
                getMenuComando();
                break;
            case 2:
                cout << "\nRESPORTES" << endl;
                break;
            case 3:
                cout << "\nGRAFICAS" << endl;
                break;
            case 4:
                cout << "\nEXPORTACION DE CONTACTOS" << endl;
                break;
            case 5:
                cout << "FIN............." << endl;
                break;
            default:
                cout << "\nOPCION NO VALIDA!, INTENTE DENUEVO." << endl << endl;
                break;
        }
    } while (opcion != 5);

}

void getMenuComando() {
    Scan escaner;
    Parser leer = Parser(&escaner);
    Archivo archivo;
    string contenido = "********* COMANDOS *********\n"
                       "1. CREACION DE GRUPOS.\n"
                       "2. INSERCION DE GRUPOS.\n"
                       "3. BUSQUEDA DE GRUPOS.\n"
                       "4. REGRESAR.\n"
                       "****************************\n"
                       "\nSELECCIONE UNA OPCION > ";

    int opcionMenuComando = 0;
    string com;
    do {
        cout << contenido;
        cin >> opcionMenuComando;
        switch (opcionMenuComando) {
            case 1:
                cout << "\nCREACION DE GRUPOS" << endl;
                cout << "comando > ";
                cin.ignore();
                getline(cin, com);
                escaner.analizar(com);
                printf(escaner.getToken());
                leer.comprobar();
                archivo.escribirAccion("CREACION DE GRUPOS\n" + com, "log");
                break;
            case 2:
                cout << "\nINSERCION DE GRUPOS" << endl;
                cout << "comando > ";
                cin.ignore();
                getline(cin, com);
                archivo.escribirAccion("INSERTAR CONTACTO", "log");
                break;
            case 3:
                cout << "\nBUSQUEDA DE GRUPOS" << endl;
                cout << "comando > ";
                cin.ignore();
                getline(cin, com);
                archivo.escribirAccion("BUSQUEDA DE CONTACTO", "log");
                break;
            case 4:
                cout << "\n<-" << endl;
                com = "";
                break;
            default:
                cout << "\nOPCION NO VALIDA!, INTENTE DENUEVO." << endl << endl;
                com = "";
                break;
        }
    } while (opcionMenuComando != 4);
}