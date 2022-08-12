#pragma once

#include <string>
#include <regex>

const std::string LOGIN = R"(.{5,30})";
const std::string SENHA = R"((?=.*[A-Z])(?=.*[0-9])(?=.*[-+_!@#$%^&*.,?]).{8,12})";

bool valida(std::string const& s, std::string const& re);
