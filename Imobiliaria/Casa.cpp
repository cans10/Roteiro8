#include "Casa.h"

Casa::Casa(string l, string b, int n, string c, string cep):Imovel (l,b,n, c, cep){
    setLogradouro(l);
    setBairro(b);
    setNumero(n);
    setCidade(c);
    setCep(cep);
}

string Casa::getDescricao(){
    string desc = strcat("Pavimento: ", getNumDePavimentos());
    desc = strcat(desc, "; Quartos");
    desc = strcat(desc, getQuantDeQuartos());
    return desc;
}
