#ifndef CONTAESPECIAL1_H_INCLUDED
#define CONTAESPECIAL1_H_INCLUDED


#include <iostream>
#include "Conta.h"
#include "IConta.h"

using namespace std;

class ContaEspecial1:public Conta{

public:
    ContaEspecial1(string n, int num, double salario, double saldo);
    void definirLimite();
};

#endif // CONTAESPECIAL1_H_INCLUDED
