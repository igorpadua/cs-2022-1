#pragma once

#include <list>
#include "Contato.h"
#include <algorithm>

class Agenda
{
public:
    std::list<Contato> contato;
    void adicionaContato(Contato contato);
    Contato buscaNome(std::string nome);
    Contato buscaEmail(std::string email);
    void excluirContato(std::string nome);
    void listaContato();
};

