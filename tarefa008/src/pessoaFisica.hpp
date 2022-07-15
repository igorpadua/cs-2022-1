#pragma once

#include <iostream>
#include "endereco.hpp"

/**
* Classe que representa uma pessoa física
* @author Igor M. Pádua
* @date 15/07/21
* @version 0.1
*/

class PessoaFisica 
{
    private:
        std::string nome;
        std::string sexo;
        int dataNascimento;
        Endereco endereco;
};