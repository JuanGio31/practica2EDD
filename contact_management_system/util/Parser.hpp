//
// Created by giovanic on 2/04/24.
//

#ifndef CONTACT_PARSER_HPP
#define CONTACT_PARSER_HPP

#include "Scan.hpp"
#include "../grupo/Contacto.hpp"

class Parser {
private:
    string comando;
    Scan lexer;

public:
    explicit Parser(const Scan &lexer) : lexer(lexer) {}

    virtual ~Parser() = default;

    void comprobar() {
        Contacto *contacto = new Contacto();
        int opcion = -1;    // 1->crear, 2->insertar, 3->buscar
        for (int i = 0; lexer.getToken().size(); i++) {
            if (opcion == -1) {
                switch (lexer.getToken()[i].getTipo()) {
                    case TokenEnum::ADD:
                        if (lexer.getToken()[i + 1].getTipo() == TokenEnum::N_G)
                            opcion = 1;
                        else
                            opcion=2;
                        break;
                    case TokenEnum::FIND:
                        opcion = 3;
                        break;
                }
            } else {

            }
        }
    }

};

#endif //CONTACT_PARSER_HPP
