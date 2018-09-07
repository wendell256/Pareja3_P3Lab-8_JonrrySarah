#include "Real.h"

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