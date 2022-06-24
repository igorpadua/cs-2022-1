/*
	 1. Implementar um programa que:
	 leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa em dias.
	 Leve em consideração o ano com 365 dias e o mês com 30.
	 Exemplo: 3 anos, 2 meses e 15 dias = 1170 dias. 
*/

#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{

	if (argc != 4) {
		std::cout << "./questao.o <<anos>> <<meses>> <<dias>>" << std::endl;
		return -1;
	}

	const int anos = atoi(argv[1]);
	const int meses = atoi(argv[2]);
	const int dias = atoi(argv[3]);

	if (meses > 12) {
		std::cout << "Só pode ser no máximo 12 meses!" << std::endl;
		return -1;
	} else if (dias > 30) {
		std::cout << "Só pode ser no máximo 30 dias!" << std::endl;	
		return -1;
	}

	const int idadeDias = anos * 365 + meses * 30 + dias;

	std::cout << idadeDias << std::endl;
	
	return 0;
}
