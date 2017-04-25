#ifndef CASA_H_INCLUDED
#define CASA_H_INCLUDED

#include "Imovel.h"

class Casa:public Imovel {
private:
    int numDePavimentos;
    int quantDeQuartos;
    double areaDoTerreno;
    double areaConstruida;

public:
    Casa(string l, string b, int n, string c, string cep);
    string getDescricao();
    int getNumDePavimentos();
    int getQuantDeQuartos();
    double getAreaDoTerreno();
    double getAreaConstruida();

};


#endif // CASA_H_INCLUDED
