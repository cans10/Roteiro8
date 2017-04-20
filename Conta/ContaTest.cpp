#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;


int main()
{

    ContaEspecial c1 ("Carlos", 3456, 1500.00f, 200.00f);
    //c1.depositar(400.00f);


    cout.precision(2);

    cout << fixed << "Conta de " << c1.getNumeroConta() << " de " << c1.getNomeCliente() <<
    " tem R$ " << c1.getSaldo() << " e limite: R$ " << c1.getLimite() << endl;
    return 0;
}
