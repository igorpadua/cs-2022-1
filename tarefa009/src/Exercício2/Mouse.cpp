#include "Mouse.h"

std::string Mouse::getDescricao() {
	return this->descricao + " " + this->tipo;
}

void Mouse::setTipo(std::string tipo) {
	this->tipo = tipo;
}
