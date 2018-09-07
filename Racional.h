#ifndef RACIONAL_H
#define RACIONAL_H
#include "Real.h"

class Racional : public Real{
    private:
        double numerador;
        double denominador;
    
    public:
        double operator+(Real&);
        double operator-(Real&);
        double operator*(Real&);
        double operator/(Real&);

        Racional(double,double);

        double getNumerador();
        double getDenominador();

        virtual string toString();

        ~Racional();

};

#endif