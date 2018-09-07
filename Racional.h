#ifndef RACIONAL_H
#define RACIONAL_H
#include "Real.h"

class Racional : public Real{
    private:
        double numerador;
        double denominador;
    
    public:

        Racional(double,double);

        double getNumerador();
        double getDenominador();

        string toString();

      

};

#endif