//
// Created by giovanic on 29/03/24.
//

#ifndef CONTACT_TOKEN_HPP
#define CONTACT_TOKEN_HPP

#include "iostream"
#include "TokenEnum.hpp"

using namespace std;

class Token {
private:
    string lexema;
    TokenEnum tipo;

public:
    Token(string lexema, TokenEnum tipo);

    virtual ~Token();

    string getToken();
};


#endif //CONTACT_TOKEN_HPP
