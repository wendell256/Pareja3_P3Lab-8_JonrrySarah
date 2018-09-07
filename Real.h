#ifndef REAL_H
#define REAL_H

#include <string>
using namespace std;

class Real{
    protected:
        double num;

    public: 
        Real();
        Real(double);
        double getNum();
        double operator+(Real&);
        double operator-(Real&);
        double operator*(Real&);
        double operator/(Real&);
        void setNum(double);
        virtual string toString(){}
        
};

#endif