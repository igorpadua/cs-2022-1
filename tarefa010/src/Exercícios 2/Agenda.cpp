#include "Agenda.h"

void Agenda::adicionaContato(Contato contato) {
    this->contato.push_back(contato);
}

Contato Agenda::buscaNome(std::string nome) {
    std::list<Contato>::iterator busca;
    busca = std::find(this->contato.begin(), this->contato.end(), nome);

    return *busca;
}

Contato Agenda::buscaEmail(std::string email) {
    std::list<Contato>::iterator busca = std::find(this->contato.begin(), this->contato.end(), email);

    return *busca;
}

void Agenda::excluirContato(std::string nome) {
    std::list<Contato>::iterator busca = std::find(this->contato.begin(), this->contato.end(), nome);

    this->contato.erase(busca);
    std::cout << "Removido com sucesso!" << std::endl;
}

void Agenda::listaContato() {
    this->contato.sort();
    for (std::list<Contato>::iterator it = this->contato.begin(); it != this->contato.end(); ++it) {
        std::cout << it->nome << std::endl; 
    }
}

