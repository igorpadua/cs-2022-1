#pragma once

#include <iostream>
#include <exception>

class SaldoInsuficienteException : public std::exception
{
public:
    virtual const char* saldoInsuficiente() const throw();
};
