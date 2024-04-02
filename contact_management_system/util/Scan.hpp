//
// Created by giovanic on 26/03/24.
//

#ifndef CONTACT_MANAGEMENT_SYSTEM_SCAN_HPP
#define CONTACT_MANAGEMENT_SYSTEM_SCAN_HPP

#include "iostream"
#include "vector"
#include "Token.hpp"

using namespace std;

class Scan {
private:
    vector<string> symbol;
    vector<Token> token;

    vector<string> split(string string1, char patron);

    void agregar(string w);

public:
    Scan();

    ~Scan();

    void analizar(const string &entrada);

    [[nodiscard]] const vector<string> &getSymbol() const {
        return symbol;
    }

    [[nodiscard]] const vector<Token> &getToken() const {
        return token;
    }
};


#endif //CONTACT_MANAGEMENT_SYSTEM_SCAN_HPP
