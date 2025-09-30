#include "../includes_cpp/conta_Bancaria.hpp"
#include <iostream>
using std::cout;

ContaBancaria::ContaBancaria(int num, const Cliente& t, double s)
    : numero(num), titular(t), saldo(s) {}

int ContaBancaria::getNumero() const {
    return numero;
}

void ContaBancaria::deposito(double valor) {
    if (valor > 0) {
        saldo += valor;
        cout << "Foram depositados: R$" << valor
             << " na conta de número: " << numero << '\n';
    } else {
        cout << "ERRO: O valor de depósito deve ser positivo!\n";
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0) {
        if (saldo >= valor) {
            saldo -= valor;
            cout << "Sacado: R$ " << valor << " da conta de número " << numero << '\n';
        } else {
            cout << "ERRO: Saldo insuficiente! Conta " << numero
                 << ". O saldo atual é: R$" << saldo << '\n';
        }
    } else {
        cout << "ERRO! O valor de saque deve ser positivo!\n";
    }
}

void ContaBancaria::transferencia(double valor, ContaBancaria& destino) {
    if (valor > 0) {
        if (saldo >= valor) {
            saldo -= valor;
            destino.saldo += valor;

            cout << "Foram transferidos: R$" << valor
                 << " da conta de número " << numero
                 << " para a conta destino: " << destino.numero << '\n';
        } else {
            cout << "ERRO: Saldo insuficiente para transferência!\n";
        }
    } else {
        cout << "ERRO: O valor de transferência deve ser positivo!\n";
    }
}

void ContaBancaria::exibir_info() const {
    cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCpf() << '\n';
    cout << "Número da conta: " << numero << ", com saldo de: R$" << saldo << '\n';
}