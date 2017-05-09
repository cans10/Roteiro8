#include <iostream>
#include <vector>
#include <string>
#include "Gerenciamento.h"

Gerenciamento::Gerenciamento(double o): orcamento(o){}

void Gerenciamento::setFuncionarios(vector<Funcionario*> &func){
    funcionario = func;
}

double Gerenciamento::calcularTotalDaFolha(){
    double totalFolha = 0;

    for(int i = 0; i < funcionario.size(); i++){
        totalFolha += funcionario[i]->calcularSalario();
    }

    if(totalFolha > orcamento){
        cout << "A folha de pagamento ultrapassou o limite do orcamento semanal." << endl;
    }
    return totalFolha;
}

double Gerenciamento::consultaSalarioDeFuncionario(int matricula){
    for(int i = 0; i < funcionario.size(); i++){
        if(matricula == funcionario[i]->getMatricula()){
            return funcionario[i]->calcularSalario();
        }
    }
}

int Gerenciamento::consultaNomeDeFuncionario(string nome){
    int retorno = 0;
    for(int i = 0; i < funcionario.size(); i++){
       retorno = funcionario[i]->getNome() == nome;
       if(retorno == 1){
            break;
       }
    }
    return retorno;
}

double Gerenciamento::getOrcamento(){
    return orcamento;
}

