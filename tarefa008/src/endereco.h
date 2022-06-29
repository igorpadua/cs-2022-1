#include <iostream>
#include "tipoEndereco.h"
#include "bairro.h"
#include "logradouro.h"

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