#include "login.hpp"
#include <regex>

bool valida(std::string const& s, std::string const& re) {
	std::smatch match;
	return std::regex_search(s, match, std::regex(re));
}

