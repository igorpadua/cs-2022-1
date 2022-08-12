#include <iostream>

#include "logger.h"

int main() {

	int num;
	std::cin.exceptions(std::istream::failbit | std::istream::badbit);

	try {
		std::cin >> num;

	} catch (std::istream::failure) {
		LOG_ERROR(true, "Falha ao ler o valor");
		return 1;
	}

	std::cout << num << '\n';

	return 0;
}
