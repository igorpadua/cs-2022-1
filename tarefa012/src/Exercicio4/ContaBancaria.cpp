#include "ContaBancaria.hpp"

void ContaBancaria::depositar(const double &valor) {
    this->saldo += valor;
}

std::string ContaBancaria::sacar(const double &valor) {
    if (valor > this->saldo)
    {
        SaldoInsuficienteException saldo;
        return saldo.saldoInsuficiente();
    }
    
    this->saldo -= valor;
    return "Retirado com sucesso!";
}