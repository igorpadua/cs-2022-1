/*
	 3. Implementar um programa que:
	 Leia o valor de um saldo e imprima-o com reajuste de 15%.
*/

#include <cstdlib>
#include <iomanip>
#include <iostream>

int main(int argc, char *argv[])
{
	
	if (argc != 2) {
		std::cout << "./questao3.o <<saldo>>" << std::endl;
		return -1;
	}

	const double saldo = atof(argv[1]);
	const double reajuste = saldo + (saldo * 15/100.0);

	std::cout << "O reajuste é: " << reajuste << std::setprecision(2)<< std::endl;

	return 0;
}
