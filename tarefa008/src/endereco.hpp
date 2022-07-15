#pragma once

#include <iostream>
#include "tipoEndereco.hpp"
#include "bairro.hpp"
#include "logradouro.hpp"

/**
* Classe que representa um endereco
* @author Igor M. Pádua
* @date 15/07/21
* @version 0.1
*/

class Endereco 
{
    private:
        int numero;
        std::string complemento;
        int cep;
        TipoEndereco tipoEndereco;
        Bairro bairro;
        Logradouro logradouro;
};