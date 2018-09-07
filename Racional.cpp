#include "Racional.h"
#include <cmath>
#include <string>
using std::string;

Racional::Racional(double numerador, double denominador){
    this->numerador = numerador;
    this->denominador = denominador;
    num=(numerador/denominador);
}

double Racional::getNumerador(){
    return numerador;
}

double Racional::getDenominador(){
    return denominador;
}

string Racional::toString(){
    string respuesta, ssNum, ssDen;
    ssNum = to_string(numerador);
    ssDen = to_string(denominador);
    respuesta = ssNum + "/" + ssDen;
    return respuesta;
}



