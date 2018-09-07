#ifndef RADICAL_H
#define RADICAL_H

#include "Real.h"

class Radical:public Real{
    private:
        double coeficiente;
        double indice;
        double radicando;
    public:
        Radical(double,double,double);
        

};

#endif