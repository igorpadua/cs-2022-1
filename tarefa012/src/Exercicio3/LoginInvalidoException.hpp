#pragma once

#include <iostream>
#include <exception>

class LoginInvalidoException : public std::exception
{
public:
    bool loginInvalido() const throw();
};
