#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

/*Classe cliente que cria um objeto cliente para ser usado como
uma variável.
Recebe nomes e cpf's*/
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
