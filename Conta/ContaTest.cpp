#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"
#include "IConta.h"
#include <vector>

using namespace std;


int main()
{
    Conta c1 ("Carlos", 9987, 1900.00f, 800.00f);
    ContaEspecial c2 ("Alysson", 3456, 1500.00f, 278.00f);
    c1.depositar(400.00f);



    cout.precision(2);
    cout << fixed << "Conta de " << c1.getNumeroConta() << " de " << c1.getNomeCliente() <<
     "\nganha R$ "<< c1.getSalarioMensal() <<", tem saldo de R$ " << c1.getSaldo() << " e limite: R$ " << c1.getLimite() << endl;

    cout << fixed << "Conta de " << c2.getNumeroConta() << " de " << c2.getNomeCliente() <<
    "\nganha R$ "<< c2.getSalarioMensal() << ", tem saldo de R$ " << c2.getSaldo() << " e limite: R$ " << c2.getLimite() << endl;

    cout<< "\n" << endl;

    vector <Conta> conta;
    conta.push_back(c1);
    conta.push_back(c2);

    for(int i = 0; i < conta.size(); i++){
        cout << fixed << "Conta de " << conta[i].getNumeroConta() << " de " << conta[i].getNomeCliente() <<
     "\nganha R$ "<< conta[i].getSalarioMensal() <<", tem saldo de R$ " << conta[i].getSaldo() << " e limite: R$ " <<conta[i].getLimite() << endl;
    }

    return 0;
}
