#include "Radical.h"
#include <cmath>

Radical::Radical(double coeficiente, double indice, double radicando){
    this->coeficiente=coeficiente;
    this->indice=indice;
    this->radicando=radicando;
    num=coeficiente*pow(radicando,1/indice);
}

double Radical::getCoeficiente(){
    return coeficiente;
}

double Radical::getIndice(){
    return indice;
}

double Radical::getRadicando(){
    return radicando;
}

string Radical::toString(){
    string tmpnum,Scoeficiente,Sindice,Sradicando;
    Scoeficiente= to_string(coeficiente);
    Sindice = to_string(indice);
    Sradicando = to_string(radicando);
    tmpnum=Scoeficiente+"x "+ Sindice + "√("+ Sradicando + ")"; 
    return tmpnum;
}


