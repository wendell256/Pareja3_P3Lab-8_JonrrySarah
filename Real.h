#ifndef REAL_H
#define REAL_H

#include <string>
using namespace std;

class Real{
    protected:
        virtual string toString();
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
        
};

#endif