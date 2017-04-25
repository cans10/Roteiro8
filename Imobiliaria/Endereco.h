#ifndef ENDERECO_H_INCLUDED
#define ENDERECO_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Endereco {

private:
    string logradouro;
    string bairro;
    int numero;
    string cidade;
    string cep;

public:
    string getLogradouro();
    string getBairro();
    int getNumero();
    string getCidade();
    string getCep();
    void setLogradouro(string l);
    void setBairro(string b);
    void setNumero(int n);
    void setCidade (string c);
    void setCep (string c);
};


#endif // ENDERECO_H_INCLUDED
