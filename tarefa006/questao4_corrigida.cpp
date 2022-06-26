/*
 4. Implementar um algoritmo que lê:
 a porcentagem do IPI a ser acrescido no valor das peças;
 o código da peça 1,
 valor unitário da peça 1,
 quantidade de peças 1
 o código da peça 2,
 valor unitário da peça 2,
 quantidade de peças 2

 O programa deve calcular o valor total a ser pago e apresentar o resultado.

 Fórmula : (valor1*quant1 + valor2*quant2)_*_(IPI/100 + 1)
*/

#include <iostream>

int main(void)
{

	int ipi;
	int codigoPeca1;
	int quantPeca1;
	double valorPeca1;
	int codigoPeca2;
	int quantPeca2;
	double valorPeca2;

	std::cout << "A porcentagem do IPI a ser acrescido no valor das peças:" << std::endl;
	std::cin >> ipi;

	// Peças 1
	std::cout << "O código da peça 1:" << std::endl;
	std::cin >> codigoPeca1;

	std::cout << "O valor unitário da peça 1:" << std::endl;
	std::cin >> valorPeca1;

	std::cout << "Quantidade de peças 1:" << std::endl;
	std::cin >> quantPeca1;

	// Peças 2
	std::cout << "O código da peça 2:" << std::endl;
	std::cin >> codigoPeca2;

	std::cout << "O valor unitário da peça 2:" << std::endl;
	std::cin >> valorPeca2;

	std::cout << "Quantidade de peças 2:" << std::endl;
	std::cin >> quantPeca2;

	const double valorTotal = (valorPeca1 * quantPeca1 + valorPeca2 * quantPeca2) * (ipi/100.0 + 1);

	std::cout << "O valor total a ser pago é: " << valorTotal << std::endl;

	return 0;
}
