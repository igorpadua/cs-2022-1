#include "Animal.h"
#include "Cachorro.h"
#include "Cavalo.h"
#include "Preguica.h"
#include "Veterinario.h"

int main(void) {

    
    Animal *animal;
    Veterinario veterinario;

    Cachorro cachorro("Bili", 3);
    Cavalo cavalo("John", 5);
    Preguica preguica("Alvez", 1);

    animal = &cachorro;
    animal->som();
    veterinario.examinar(animal);

    animal = &cavalo;
    animal->som();
    veterinario.examinar(animal);

    animal = &preguica;
    animal->som();
    veterinario.examinar(animal);

    Animal *zoologico[10];

    Cavalo cavalo1("Cavalo1", 3);
    Cavalo cavalo2("Cavalo2", 5);
    Cavalo cavalo3("Cavalo3", 1);
    Preguica preguica1("Preguica1", 2);
    Preguica preguica2("Preguica2", 3);
    Preguica preguica3("Preguica3", 5);
    Cachorro cachorro1("Cachorro1", 3);
    Cachorro cachorro2("Cachorro2", 1);

    zoologico[0] = &cachorro;
    zoologico[1] = &cavalo;
    zoologico[2] = &cavalo1;
    zoologico[3] = &cavalo2;
    zoologico[4] = &cavalo3;
    zoologico[5] = &preguica1;
    zoologico[6] = &preguica2;
    zoologico[7] = &preguica3;
    zoologico[8] = &cachorro1;
    zoologico[9] = &cachorro2;

    std::cout << "Zoologoco:" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        zoologico[i]->som();
        if (dynamic_cast<Cavalo*>(zoologico[i]) || dynamic_cast<Cachorro*>(zoologico[i])) {
            zoologico[i]->comportamento();
        }
    }
    

    return 0;
}
