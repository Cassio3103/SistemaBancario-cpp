#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

class Cliente {
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
