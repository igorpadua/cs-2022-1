#include "Login.hpp"

std::string Login::getUsuario() {
    return this->usuario;
}

std::string Login::getSenha() {
    return this->senha;
}

bool Login::fazer_login(const std::string &usuario, const std::string &senha) {
    LoginInvalidoException invalido;
    return (usuario == this->usuario && senha == this->senha) ? true : invalido.loginInvalido();
}