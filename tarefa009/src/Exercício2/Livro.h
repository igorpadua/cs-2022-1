#ifndef LIVRO
#define LIVRO

#include "Produto.h"

class Livro : public Produto
{
public:
	Livro() {};
	Livro(std::string nomeloja, double preco, std::string descricao) : Produto(nomeloja, preco, descricao) {}
	std::string getAutor();
	void setAutor(std::string autor);
	virtual std::string getDescricao();

private:
	std::string autor;
};

#endif // LIVRO
