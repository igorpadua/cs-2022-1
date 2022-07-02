#ifndef MOUSE
#define MOUSE

#include "Produto.h"

class Mouse : public Produto
{
public:
	Mouse() {};
	Mouse(std::string nomeloja, double preco, std::string descricao) : Produto(nomeloja, preco, descricao) {}
	std::string getTipo();
	void setTipo(std::string tipo);
	virtual std::string getDescricao();

private:
	std::string tipo;

};

#endif // MOUSE
