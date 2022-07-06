#include "Agenda.h"

void Agenda::adicionaContato(Contato contato) {
    this->contato.push_back(contato);
}

Contato Agenda::buscaNome(std::string nome) {
    std::list<Contato>::iterator busca = std::find(this->contato.begin(), this->contato.end(), nome);
}

Contato Agenda::buscaEmail(std::string email) {
    std::list<Contato>::iterator busca = std::find(this->contato.begin(), this->contato.end(), email);
}

void Agenda::excluirContato(std::string nome) {

}

void Agenda::listaContato() {

}