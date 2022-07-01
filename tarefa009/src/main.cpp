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

    Animal zoologico[10];

    zoologico[0] = cachorro;
    zoologico[1] = cavalo;

    for (int i = 0; i < 2; i++)
    {
        zoologico->som();
    }
    

    return 0;
}