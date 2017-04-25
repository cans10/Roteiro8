#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"
#include "IConta.h"

using namespace std;


int main()
{

    Conta c1 ("Carlos", 9987, 1900.00f, 800.00f);
    ContaEspecial c2 ("Alysson", 3456, 1500.00f, 200.00f);
    //c1.depositar(400.00f);



    cout.precision(2);
    cout << fixed << "Conta de " << c1.getNumeroConta() << " de " << c1.getNomeCliente() <<
     " ganha R$ "<< c1.getSalarioMensal() <<", tem saldo de R$ " << c1.getSaldo() << " e limite: R$ " << c1.getLimite() << endl;

    cout << fixed << "Conta de " << c2.getNumeroConta() << " de " << c2.getNomeCliente() <<
    " ganha R$ "<< c2.getSalarioMensal() << ", tem saldo de R$ " << c2.getSaldo() << " e limite: R$ " << c2.getLimite() << endl;

    return 0;
}
