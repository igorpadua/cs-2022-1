#include "Agenda.h"

int main(void)
{

    Agenda agenda;
    Contato contato1("José", "jose@gmail.com");
    Contato contato2("Silva", "silva@gmail.com");
    Contato contato3("André", "andre@gmail.com");

    // Adicionando a lista
    agenda.adicionaContato(contato1);
    agenda.adicionaContato(contato2);
    agenda.adicionaContato(contato3);
   
    // Fazendo busca por nome
    agenda.buscaNome("José");

    // Fazendo busca por email
    agenda.buscaEmail("andre@gmail.com");

    // Excluindo um usuário
    agenda.excluirContato("Silva");

    // Mostrando a lista completa
    agenda.listaContato();
    

    return 0;
}
