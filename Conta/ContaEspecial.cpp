#include "ContaEspecial.h"

        ContaEspecial::ContaEspecial(string n, int num, double salario, double saldo){
            setNomeCliente(n);
            setSalarioMensal(salario);
            setNumeroConta(num);
            setSaldo(saldo);
            definirLimite();
        }
        void ContaEspecial::definirLimite(){
            setLimite(3 * getSalarioMensal());
        }
