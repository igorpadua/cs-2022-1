#pragma once

#include <iostream>
#include "pais.hpp"

/**
* Classe que representa um Estado
* @author Igor M. Pádua
* @date 15/07/21
* @version 0.1
*/

class Estado 
{
    public:
        std::string nome;
    private:
        std::string sigla;
        Pais pais;
};