#ifndef REAL_H
#define REAL_H

class Real{
    protected:
        virtual double operator+(Real&)=0;
        virtual double operator-(Real&)=0;
        virtual double operator*(Real&)=0;
        virtual double operator/(Real&)=0;
        double num;
};

#endif