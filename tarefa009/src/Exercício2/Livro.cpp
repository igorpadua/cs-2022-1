#include "Livro.h"

std::string Livro::getAutor() {
	return this->autor;
}

void Livro::setAutor(std::string autor) {
	this->autor = autor;
}

std::string Livro::getDescricao() {
	return this->descricao + " " + this->autor;
}
