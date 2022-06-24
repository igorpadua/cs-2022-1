/*
	 5. Implementar um programa que:
	 leia o valor do salário mínimo e o valor do salário de um usuário,
	 calcule a quantidade de salários mínimos esse usuário ganha e imprima o resultado. (1SM=R$1.045,00).
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

int main(int argc, char *argv[])
{

	if (argc != 3) {
		std::cout << "./questao5.o <<salario minimo>> <<salario usuario>>" << std::endl;
		return -1;
	}

	const double salarioMinimo = atof(argv[1]);
	const double salarioUsuario = atof(argv[2]);

	const double quantSalario = salarioUsuario/salarioMinimo;

	std::cout << "O usuário ganha: " << quantSalario << std::setprecision(2) << std::endl;

	return 0;
}
