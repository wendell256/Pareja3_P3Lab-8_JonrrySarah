#include "Real.h"

Real::Real(double num){
    this->num = num;
}

Real::Real(){
    this->num=0;
}

double Real::getNum(){
    return num;
}

double Real::operator+(Real& rValue){
    return this->num + rValue.getNum();
}

double Real::operator-(Real& rValue){
    return this->num - rValue.getNum();
}

double Real::operator*(Real& rValue){
    return this->num * rValue.getNum();
}

double Real::operator/(Real& rValue){
    return this->num/rValue.getNum();
}

void Real::setNum(double Nnum){
    num=Nnum;
}

