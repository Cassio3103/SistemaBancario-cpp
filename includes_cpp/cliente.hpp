#pragma once 
#include <string>
using std::string;

/*Arquivo cabeçalho com as mesmas informações do cliente.cpp*/
class Cliente{
    private: 
        string nome;
        string cpf;
    public:
        Cliente(string nome, string cpf) : nome(nome), cpf(cpf){
        }

    string getNome() const{
        return nome;
    }
    string getCpf() const{
        return cpf;
    }
};