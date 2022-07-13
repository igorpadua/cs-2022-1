#pragma once

#include <iostream>
#include "LoginInvalidoException.hpp"

class Login
{
private:
    std::string usuario, senha;
public:
    Login(std::string usuario, std::string senha) 
    : usuario(usuario),
    senha(senha)
    {};

    bool fazer_login(const std::string &usuario, const std::string &senha);

    std::string getUsuario();
    std::string getSenha();
};
