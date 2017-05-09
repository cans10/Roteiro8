#include "Imovel.h"

Imovel::Imovel (string l, string b, int n, string c, string cep) {
    setLogradouro(l);
    setBairro(b);
    setNumero(n);
    setCidade(c);
    setCep(cep);
}
Imovel::getEndereco(){
    string ender = strcat(getLogradouro(), "" - ");
    ender = strcat( ender, getBairro());
    return ender;
}
Imovel::getDescricao(){
}

