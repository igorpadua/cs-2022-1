#ifndef PREGUICA
#define PREGUICA

#include "Animal.h"

class Preguica : public Animal
{
public:
    Preguica(std::string nome, int idade) : Animal(nome, idade) {};
    virtual void som();
    virtual void comportamento();
    
};

#endif // PREGUICA
