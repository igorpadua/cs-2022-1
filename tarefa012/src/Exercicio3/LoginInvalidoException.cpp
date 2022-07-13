#include "LoginInvalidoException.hpp"

bool LoginInvalidoException::loginInvalido() const throw() {

    std::cout << "Usuario ou senha incorreta" << '\n';
    return false;
}