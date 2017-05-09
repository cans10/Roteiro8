#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string n, int num, double salario, double saldo): Conta(n, num, salario, saldo){
    definirLimite();
}

void ContaEspecial::definirLimite(){
    setLimite(3 * getSalarioMensal());
}


