#include <iostream>

using namespace std;
#include "Casa.h"

int main()
{

    Casa c ("Rua do Lixo", "Tambor", 666, "FedorCity", "222333.44");

    c.getDescricao();
    cout<< "Casa 1: "<< c.getEndereco() << "\nDescricao: " << c.getDescricao() << endl;

    return 0;
}
