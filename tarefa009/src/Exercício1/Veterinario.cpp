#include "Veterinario.h"

void Veterinario::examinar(Animal *animal) {
    std::cout << "O vetirnairo examinou o animal é emitiu o som: ";
    animal->som();
}