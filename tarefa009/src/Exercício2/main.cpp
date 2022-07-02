#include "Mouse.h"
#include "Livro.h"

int main(void)
{
	
	Produto *carrinho[4];	

	Mouse mouse1("Loja1", 23.50, "Mause branco");
	mouse1.setTipo("Sem fio");
	Mouse mouse2("Loja1", 25.25, "Mause preto");
	mouse2.setTipo("Com fio");

	Livro livro1("Loja1", 10.20, "Muito grande");
	livro1.setAutor("João");
	Livro livro2("Loja1", 10.20, "Muito pequeno");
	livro2.setAutor("Vitor");

	carrinho[0] = &mouse1;
	carrinho[1] = &mouse2;
	carrinho[2] = &livro1;
	carrinho[3] = &livro2;

	for (int i = 0; i < 4; i++) {
		std::cout << carrinho[i]->getDescricao() << std::endl;
	}

	return 0;
}
