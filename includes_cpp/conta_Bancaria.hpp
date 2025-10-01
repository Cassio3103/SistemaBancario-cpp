#pragma once
#include "cliente.hpp"

/*Agrupamento dos métodos presentes em conta_bancaria.cpp*/
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