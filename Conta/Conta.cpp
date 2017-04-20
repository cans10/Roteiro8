#include "Conta.h"

        Conta::Conta(string n, int num, double salario, double saldo){
            setNomeCliente(n);
            setSalarioMensal(salario);
            setNumeroConta(num);
            setSaldo(saldo);
            definirLimite();
        }

        void Conta::sacar(double valor){
            if(valor <= getLimite()){
                if(valor <= getSaldo()){
                    setSaldo(getSaldo()- valor);
                    resposta = "Saque realizado com sucesso";
                } else{
                    resposta = "Saldo Insuficiente";
                }
            } else{
                resposta = "Saque superior ao seu limite";
            }
        }

        void Conta::depositar(double valor){
            setSaldo(getSaldo()+ valor);
            resposta = "Deposito realizado com sucesso";

        }

        void Conta::setNomeCliente(string n){
            nomeCliente = n;
        }

        void Conta::setSalarioMensal(double s){
            salarioMensal = s;
        }

        void Conta::setNumeroConta(int n){
            numeroConta = n;
        }

        void Conta::setSaldo(double s){
            saldo = s;
        }

        void Conta::setLimite(double s){
            limite = s;
        }

        string Conta::getNomeCliente(){
            return nomeCliente;
        }

        double Conta::getSalarioMensal(){
            return salarioMensal;
        }

        int Conta::getNumeroConta(){
            return numeroConta;
        }

        double Conta::getSaldo(){
            return saldo;
        }

        double Conta::getLimite(){
            return limite;
        }

        string Conta::getResposta(){
            return resposta;
        }

        void Conta::definirLimite(){
            setLimite(2 * getSalarioMensal());
        }


