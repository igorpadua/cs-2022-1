#include "Produto.h"

Produto::Produto(std::string nomeloja, double preco, std::string descricao) {
	this->nomeloja = nomeloja;
	this->preco = preco;
	this->descricao = descricao;
}

std::string Produto::getNomeloja() {
	return this->nomeloja;
}

double Produto::getPreco() {
	return this->preco;
}

std::string Produto::getDescricao() {
	return "Produto de informática";
}

void Produto::setNomeloja(std::string nomeloja) {
	this->nomeloja = nomeloja;
}

void Produto::setPreco(double preco) {
	this->preco = preco;
}

