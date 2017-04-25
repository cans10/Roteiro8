#ifndef IMOVEL_H_INCLUDED
#define IMOVEL_H_INCLUDED

#include <iostream>
#include "Endereco.h"

using namespace std;

class Imovel:public Endereco {

private:
    string endereco;
public:
    Imovel(string l, string b, int n, string c, string cep);
    string getEndereco();
    string getDescricao();

};





#endif // IMOVEL_H_INCLUDED
