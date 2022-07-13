#include <iostream>

#include "ContaBancaria.hpp"

int main(void)
{

    ContaBancaria usuario(1200);

    usuario.depositar(200);

    std::cout << usuario.sacar(200) << std::endl;
    std::cout << usuario.sacar(2000) << std::endl;

    return 0;
}
