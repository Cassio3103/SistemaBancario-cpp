#pragma once
#include "cliente.hpp"

class ContaBancaria {
private:
    int numero;
    double saldo;
    Cliente titular;

public:
    ContaBancaria(int num, const Cliente& t, double s = 0.0);

    int getNumero() const;

    void deposito(double valor);
    void sacar(double valor);
    void transferencia(double valor, ContaBancaria& destino);
    void exibir_info() const;
};