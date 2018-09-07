#include "Radical.h"
#include <cmath>

Radical::Radical(double coeficiente, double indice, double radicando){
    this->coeficiente=coeficiente;
    this->indice=indice;
    this->radicando=radicando;
    num=coeficiente*pow(coeficiente,1/indice);
}
