#ifndef CAVALO
#define CAVALO

#include "Animal.h"

class Cavalo : public Animal
{
public:
    Cavalo(std::string nome, int idade) : Animal(nome, idade) {};
    virtual void som();
    void corre();
};

#endif // !CAVALO
