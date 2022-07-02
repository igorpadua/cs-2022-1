#ifndef PRODUTO
#define PRODUTO

#include <iostream>

class Produto
{
public:
	Produto() {};
	Produto(std::string nomeloja, double preco, std::string descricao);
	std::string descricao;
	std::string getNomeloja();
	double getPreco();
	virtual std::string getDescricao();
	void setNomeloja(std::string nomeloja);
	void setPreco(double preco);
	
private:
	std::string nomeloja;
	double preco;

};

#endif // PRODUTO
