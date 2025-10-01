#include "../includes_cpp/conta_Bancaria.hpp"
#include <iostream>
using std::cout;

//Criando uma nova instancia conta bancaria
// Recebe como parâmetros o número da conta, um objeto cliente passado por referência e o saldo 
ContaBancaria::ContaBancaria(int num, const Cliente& t, double s)
    : numero(num), titular(t), saldo(s) {}

    // Recebe o número da conta
int ContaBancaria::getNumero() const {
    return numero;
}
//Verifica se o valor de deposito é positivo e se sim, aciona ao saldo
void ContaBancaria::deposito(double valor) {
    if (valor > 0) {
        saldo += valor;
        cout << "Foram depositados: R$" << valor
             << " na conta de número: " << numero << '\n';
    } else {
        cout << "ERRO: O valor de depósito deve ser positivo!\n";
    }
}
/* Do mesmo modo, verifique se o valor do saque é positivo, se for positivo, verifica 
 se o saldo é suficiente*/
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
/* Recebe o valor a ser tranferido e a conta destinada (passei por referência, o que permite a
modificação do saldo dela)*/
// Também verifica se o valor é positivo e se o saldo é suficiente na conta de origem
/*Se ambas as condições forem verdade o valor do saldo é subtraído da conta atual e 
adiciona o valor ao saldo da conta de destino.*/
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
/* Esse pedaço do código apenas exibe as infromações*/
void ContaBancaria::exibir_info() const {
    cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCpf() << '\n';
    cout << "Número da conta: " << numero << ", com saldo de: R$" << saldo << '\n';
}