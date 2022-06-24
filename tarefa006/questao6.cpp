/*
	 6. Implementar um programa que:
	 leia um número inteiro
	 e imprima o seu antecessor e seu sucessor.
*/

#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[])
{
	
	if (argc != 2) {
		std::cout << "./questao5.o <<numero inteiro>>" << std::endl;
		return -1;
	}

	const int num = atoi(argv[1]);

	std::cout << "O antecessor é: " << num - 1 << " e o sucessor é: " << num + 1 << std::endl;

	return 0;
}
