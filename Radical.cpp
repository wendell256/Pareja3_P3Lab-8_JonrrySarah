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

