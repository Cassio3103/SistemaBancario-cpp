#include "../includes_cpp/cliente.hpp"
#include "../includes_cpp/conta_Bancaria.hpp"

int main(){

    Cliente cliente1("Cassio Ferreira", "126.388.484-92");
    ContaBancaria conta1(2134, cliente1);

    return 0;
}