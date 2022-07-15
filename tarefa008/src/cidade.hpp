#pragma once

#include <iostream>
#include "estado.hpp"

/**
* Classe que representa uma cidade
* @author Igor M. Pádua
* @date 15/07/21
* @version 0.1
*/

class Cidade
{
    public:
        std::string sigla;
    private:
        std::string nome;
        Estado estado;
};