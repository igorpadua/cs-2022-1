#include "Animal.h"

Animal::Animal(std::string nome, int idade) {
    this->nome = nome;
    this->idade = idade;
}

void Animal::som() {
    std::cout << "Som de animal" << std::endl;
}

int Animal::getIdade() {
    return this->idade;
}

std::string Animal::getNome() {
    return this->nome;
}

void Animal::setNome(std::string nome) {
    this->nome = nome;
}

void Animal::setIdade(int idade) {
    this->idade = idade;
}