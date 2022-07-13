#include "SaldoInsuficienteException.hpp"

const char* SaldoInsuficienteException::saldoInsuficiente() const throw() {
    return "Você não tem valor suficiente";
}