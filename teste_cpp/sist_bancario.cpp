#include "../includes_cpp/cliente.hpp"
#include "../includes_cpp/conta_Bancaria.hpp"
/*TESTE*/

int main(){
 
    /*Informações do cliente*/
    Cliente cliente1("Cassio Ferreira", "126.388.484-92");
    Cliente cliente2("Ana Luiza", "223.657.389-64");

    /*Conta bancária do cliente*/
    ContaBancaria conta1(2134, cliente1);
    ContaBancaria conta2(5473, cliente2, 467.56);

    /*Testes dos métodos*/
    conta2.exibir_info();
    conta1.deposito(4900);
    conta1.transferencia(200, conta2);
    conta1.transferencia(-250, conta2);
    
    return 0;
}