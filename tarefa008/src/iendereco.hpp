#pragma once

/**
* Classe abstrata para consultar o endereco por CEP 
* @author Igor M. Pádua
* @version 0.1
*/

class IEndereco 
{
    public:
        virtual void consultaPorCep() = 0;
};