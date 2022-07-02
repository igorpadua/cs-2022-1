#ifndef ANIMAL
#define ANIMAL

#include <iostream>

class Animal
{
public:
    Animal() {};
    Animal(std::string nome, int idade);
    virtual void som();
    virtual void comportamento();
    std::string getNome();
    int getIdade();
    void setNome(std::string nome);
    void setIdade(int idade);
private:
    std::string nome;
    int idade;
};
#endif // ANIMAL
