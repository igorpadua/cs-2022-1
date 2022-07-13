#pragma once

#include "SaldoInsuficienteException.hpp"

class ContaBancaria
{
private:
    double saldo;
public:
    ContaBancaria(double saldo)
    : saldo(saldo) 
    {};

    void depositar(const double &valor);
    std::string sacar(const double &valor);
};
