//
// Created by giovanic on 2/04/24.
//

#ifndef CONTACT_PARSER_HPP
#define CONTACT_PARSER_HPP

#include "Scan.hpp"
#include "../grupo/Contacto.hpp"
#include "../estructuras/Tabla.hpp"
#include "../grupo/Grupo.hpp"

class Parser {
private:
    string comando;
    Scan *lexer;
    Tabla<string, Grupo> *grupos = new Tabla<string, Grupo>(10);

public:
    explicit Parser(Scan *lexer) : lexer(lexer) {}

    virtual ~Parser() = default;

    void comprobar() {
        if (lexer->getToken()[0].getTipo() == TokenEnum::ADD && lexer->getToken()[1].getTipo() == TokenEnum::N_G) {
            Grupo *gp = new Grupo();
            if (lexer->getToken()[2].getTipo() == TokenEnum::ID) {
                gp->setNombre(lexer->getToken()[2].getLexema());
            }
            grupos->insertar(gp->getNombre(), *gp);
        }
    }

    void getGrupoN(string key) {
       // cout << grupos->get(key).getNombre() << endl;
    }

};

#endif //CONTACT_PARSER_HPP
