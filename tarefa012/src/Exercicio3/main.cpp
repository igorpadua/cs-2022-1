#include <iostream>
#include "Login.hpp"

int main(void)
{

    Login usuario1("Igor", "123");

    if (usuario1.fazer_login("Igor", "123"))
    {
        std::cout << "Usuario logado" << '\n';
    }
    
    usuario1.fazer_login("Igorr", "123");

    return 0;
}
