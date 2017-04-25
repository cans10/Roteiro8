#include "Casa.h"

Casa::Casa(string l, string b, int n, string c, string cep):Imovel (l,b,n, c, cep){
    setLogradouro(l);
    setBairro(b);
    setNumero(n);
    setCidade(c);
    setCep(cep);
}

string Casa::getDescricao(){
    string desc = "Pavimento: " ## getNumDePavimentos() ## "; Quartos: " ## getQuantDeQuartos() ## "; Terreno: " ## getAreaDoTerreno() ## "; Area Construida: "+ getAreaConstruida();
    return desc;
}
