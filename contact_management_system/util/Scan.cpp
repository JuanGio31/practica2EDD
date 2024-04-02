//
// Created by giovanic on 26/03/24.
//

#include "Scan.hpp"
#include "Token.hpp"

vector<string> Scan::split(std::string string1, char patron) {
    int posInit = 0;
    int posFound = 0;
    string splitted;
    vector<string> results;

    while (posFound >= 0) {
        posFound = string1.find(patron, posInit);
        splitted = string1.substr(posInit, posFound - posInit);
        posInit = posFound + 1;
        results.push_back(splitted);
    }
    return results;
}

void Scan::agregar(std::string w) {
    if (w == "STRING") {
        token.insert(token.end(), Token(w, TokenEnum::STRING));
    } else if (w == "ADD") {
        token.insert(token.end(), Token(w, TokenEnum::ADD));
    } else if (w == "NEW-GROUP") {
        token.insert(token.end(), Token(w, TokenEnum::N_G));
    } else if (w == "INTEGER") {
        token.insert(token.end(), Token(w, TokenEnum::INTEGER));
    } else if (w == "CHAR") {
        token.insert(token.end(), Token(w, TokenEnum::CHAR));
    } else if (w == "DATE") {
        token.insert(token.end(), Token(w, TokenEnum::DATE));
    } else if (w == "FIELDS") {
        token.insert(token.end(), Token(w, TokenEnum::FIELDS));
    } else if (w == "FIELD") {
        token.insert(token.end(), Token(w, TokenEnum::FIELD));
    } else if (w == "ORDER") {
        token.insert(token.end(), Token(w, TokenEnum::ORDER));
    } else if (w == "FIND") {
        token.insert(token.end(), Token(w, TokenEnum::FIND));
    } else if (w == "CONTACT") {
        token.insert(token.end(), Token(w, TokenEnum::CONTACT));
    } else if (w == "IN") {
        token.insert(token.end(), Token(w, TokenEnum::IN));
    } else if (w == "CONTACT-FIELD") {
        token.insert(token.end(), Token(w, TokenEnum::C_F));
    } else {
        if (!w.empty())
            token.insert(token.end(), Token(w, TokenEnum::ID));
    }
}

void Scan::analizar(const std::string &entrada) {
    string temp;
    for (char i: entrada) {
        switch (i) {
            case ' ':
                agregar(temp);
                temp = "";
                break;
            case ',':
                if (temp.length() == 1) {
                    token.insert(token.end(), Token(",", TokenEnum::COMA));
                    temp = "";
                } else {
                    agregar(temp);
                    if (temp.find(',')) {
                        token.insert(token.end(), Token(",", TokenEnum::COMA));
                    }
                    temp = "";
                }
                break;
            case ';':
                if (temp.length() == 1) {
                    token.insert(token.end(), Token(";", TokenEnum::P_COMA));
                    temp = "";
                } else {
                    agregar(temp);
                    if (temp.find(';')) {
                        token.insert(token.end(), Token(";", TokenEnum::P_COMA));
                    }
                    temp = "";
                }
                break;
            case '=':
                if (temp.length() == 1) {
                    token.insert(token.end(), Token("=", TokenEnum::EQUAL));
                    temp = "";
                } else {
                    agregar(temp);
                    if (temp.find('=')) {
                        token.insert(token.end(), Token("=", TokenEnum::EQUAL));
                    }
                    temp = "";
                }
                break;
            case '(':
                if (temp.length() == 1) {
                    token.insert(token.end(), Token("(", TokenEnum::PAR_IZ));
                    temp = "";
                } else {
                    agregar(temp);
                    if (temp.find('(')) {
                        token.insert(token.end(), Token("(", TokenEnum::PAR_IZ));
                    }
                    temp = "";
                }
                break;
            case ')':
                if (temp.length() == 1) {
                    token.insert(token.end(), Token(")", TokenEnum::PAR_DER));
                    temp = "";
                } else {
                    agregar(temp);
                    if (temp.find(')')) {
                        token.insert(token.end(), Token(")", TokenEnum::PAR_DER));
                    }
                    temp = "";
                }
                break;
            default:
                temp += i;
                break;
        }
    }

    symbol = split(entrada, ' ');
}

Scan::Scan() {

}

Scan::~Scan() {

}
