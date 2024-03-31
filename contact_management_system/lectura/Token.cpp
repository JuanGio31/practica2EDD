//
// Created by giovanic on 29/03/24.
//

#include "Token.hpp"

#include <utility>

Token::Token(string lexema, TokenEnum tipo) {
    this->lexema = lexema;
    this->tipo = tipo;
}

Token::~Token() {

}

string Token::getToken() {
    return "lexema [ " + lexema + " ]";
}
