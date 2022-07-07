#pragma once

#include <iostream>

class Contato
{
public:
    std::string nome;
    std::string email;

    Contato(std::string nome, std::string email) {
        this->nome = nome;
        this->email = email;
    }
};
