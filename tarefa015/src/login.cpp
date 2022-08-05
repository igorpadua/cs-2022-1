#include "login.hpp"

#include <iostream>
#include <regex>

bool validaLogin(std::string const& login) {

	std::regex regex(".{5,30}");
	std::smatch match;

	return std::regex_search(login, match, regex);
}

bool validaSenha(std::string const& senha) {

	std::regex regex("(?=.*[A-Z])(?=.*[0-9])(?=.*[-+_!@#$%^&*.,?]).{8,12}");
	std::smatch match;

	return std::regex_search(senha, match, regex);
}
