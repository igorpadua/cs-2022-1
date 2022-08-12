#include <iostream>
#include <string>
#include <regex>

#include "login.hpp"

int main(int argc, char **argv)
{

	if (argc < 3) {
		std::cout << "./tarefa015 login senha" << '\n';
		return 1;
	}

	const std::string login{argv[1]};
	const std::string senha{argv[2]};

	if (valida(login, LOGIN) and valida(senha, SENHA)) {
		std::cout << "O login e senha estão corretos" << '\n';
	} else {
		std::cout << "O login ou senha está incorreto!" << '\n';
	}

	return 0;
}
