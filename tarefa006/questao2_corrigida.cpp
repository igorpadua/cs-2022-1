/*
	 2. Implementar um programa que:
	 imprima a média aritmética dos números 8,9 e 7.
	 A média dos números 4, 5 e 6.
	 A soma das duas médias.
	 A média das médias.
*/

#include <iostream>

int main(void) 
{

	const int media1 = (8 + 9 + 7)/3;
	const int media2 = (4 + 5 + 6)/3;
	const int somaMedia = media1 + media2;
	const int mediaMedia = somaMedia/2;

	std::cout << "A média aritmética de 8, 9 e 7 é: " << media1 << std::endl;	
	std::cout << "A média aritmética de 4, 5 e 6 é: " << media2 << std::endl;	
	std::cout << "A soma de " << media1 << " + " << media2 << " é: " << somaMedia << std::endl;
	std::cout << "A média de " << media1 << " e " << media2 << " é: " << mediaMedia << std::endl;
	
	return 0;
}
