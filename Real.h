#ifndef REAL_H
#define REAL_H

#include <string>
using namespace std;

class Real{
    protected:
        virtual string toString()=0;
        double operator+(Real&);
        double operator-(Real&);
        double operator*(Real&);
        double operator/(Real&);
        double num;
};

#endif