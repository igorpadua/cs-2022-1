#ifndef CACHORRO
#define CACHORRO

#include "Animal.h"

class Cachorro : public Animal
{
public:
    Cachorro(std::string nome, int idade) : Animal(nome, idade) {};
    virtual void som();
    virtual void comportamento();
    
};
#endif // CACHORRO
