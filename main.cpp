#include "Real.h"
#include "Radical.h"
#include "Racional.h"
#include <sstream>
#include <fstream>
#include <cstdlib>

#include <iostream>
#include <vector>

//√
void AggRacional();
void AggRadical();
void RealizarOperacion();
void printBanco();
void printBanco2();
void toString();
void escribirArchivo();
void cargarArchivo();

vector<Real*> banco;
int main(){
    int opc;
    char resp='s';
    while(resp=='s'||resp=='S'){
        cout<<"OPERADORES DE NUMEROS"<<endl<<"By: Sarah y Wendell"<<endl<<"1) Agregar Racional al banco"<<endl
            <<"3) Agregar Radical al banco"<<endl<<"4) Realizar Operacion"<<endl<<"5) Ver Banco"<<endl
            <<"6) Salir"<<endl<<"Seleccione una opcion: "<<endl;
        cin>>opc;
        switch(opc){
            case 1:
                AggRacional();
        }
    }

}

void AggRacional(){
    //agregar racionales al banco.
    double numerador, denominador;
    bool invalido = true;
    Racional* racional;
    cout<<"Ingrese numerador: "<<endl;
    cin>>numerador;
    cout<<"Ingrese denominador: "<<endl;
    cin>>denominador;
    while (invalido){
        if (denominador == 0){
            cout<<"Denominador no puede ser 0. Ingrese denominador otra vez: "<<endl;
            cin>>denominador;
            if (denominador != 0)
                invalido = false;
        }
    }
    racional = new Racional(numerador,denominador);
    banco.push_back(racional);
    cout<<"Numero racional agregado exitosamente."<<endl;
}

void AggRadical(){
    double coeficiente, indice, radicando;
    Radical* radical;
    cout<< "Ingrese coeficiente: "<<endl;
    cin>>coeficiente;
    cout<<"Ingrese indice: "<<endl;
    cin>>indice;
    while (indice < 0){
        cout<<"Indice no puede ser 0. Ingrese indice otra vez: "<<endl;
        cin>>indice;
    }
    cout<<"Ingrese radicando: "<<endl;
    cin>>radicando;

    radical = new Radical(coeficiente,indice,radicando);
    banco.push_back(radical);
    cout<<"Numero radical agregado exitosamente. "<<endl;
}

void printBanco(){
    Racional* racional;
    Radical* radical;
    int cRac = 0,cRad = 0;
    if (!banco.empty()){
        cout<<"Racionales: "<<endl;
        for (int i = 0; i < banco.size(); i++){
            racional = dynamic_cast<Racional*>(banco[i]);
            if(racional!=NULL){
                cout<<racional->toString()<<endl;
            }
        }
        cout<<endl;
        cout<<"Radicales: "<<endl;
        for (int i = 0; i < banco.size(); i++){
            radical = dynamic_cast<Radical*>(banco[i]);
            if(radical!=NULL){
                cout<<radical->toString()<<endl;
            }
        }
    }
}

void printBanco2(){
    Racional* racional;
    Radical* radical;
    for (int i = 0; i < banco.size(); i++){
        racional = dynamic_cast<Racional*>(banco[i]);
        if (racional!=NULL){
            cout<<i++<<racional->toString()<<endl;
        }else {
            radical = dynamic_cast<Radical*>(banco[i]);
            if (radical!=NULL){
                cout<<i++<<radical->toString()<<endl;
            }
        }
    }
}

void RealizarOperacion(){
    int opc,opc2,opc3,opc4;//opc=num1, opc2=seleccionar tipo de num2, opc3=num2, opc4=operacion;
    Real* tmp = new Real(0);
    //primer numero
    cout<<endl<<"***REALIZAR OPERACION***"<<endl<<endl;
    cout<<"a) Seleccionar Numero A:"<<endl;
    printBanco2();
    cout<<endl<<"Ingrese una opcion:"<<endl;
    cin>>opc;
    
    while(opc>banco.size() || opc<0){//validar que no se pase del rango
        cout<<"ERROR ingrese opcion de nuevo:"<<endl;
        cin>>opc;
    }
    opc--;
    //double Num1 = banco[opc]->getNum();

    //segundo numero
    double Num2=0;
    
    cout<<endl<<"b) Seleccionar Numero B:"<<endl<<endl;
    cout<<"1) Seleccionar de Banco"<<endl<<"2) Ingresar Numero"<<endl<<"Seleccione una opcion:"<<endl;
    cin>>opc2;
    while(opc2<1 || opc2>2){
        cout<<"ERROR ingrese de nuevo:"<<endl;
        cin>>opc2;
    }
    switch(opc2){
        case 1:
            printBanco2();
            cout<<endl<<"Ingrese una opcion:"<<endl;
            cin>>opc3;
    
            while(opc3>banco.size() || opc3<0){//validar que no se pase del rango
                cout<<"ERROR ingrese opcion de nuevo:"<<endl;
                cin>>opc3;
            }
            opc3--;
            tmp=banco[opc3];
            
        break;
        case 2:
            cout<<"Ingrese numero:"<<endl;
            cin>>Num2;
            tmp->setNum(Num2);
        break;
    }
    cout<<endl<<"c) Operacion"<<endl<<endl;
    cout<<"1) Suma"<<endl<<"2) Resta"<<endl<<"3) Multiplicacion"<<endl<<"4) Division"<<endl<<"Seleccione una opcion"<<endl;
    cin>>opc4;
    switch(opc4){
        case 1: 
            cout<<endl;
            toString(banco[opc]);
            cout<<"+";
            toString(tmp);
            cout<<" = ";
            cout<<endl<<*banco[opc]+*tmp<<endl;
        break;
        case 2:
            cout<<endl;
            toString(banco[opc]);
            cout<<"-";
            toString(tmp);
            cout<<" = ";
            cout<<*banco[opc]-*tmp<<endl;
        break;
        case 3:
            cout<<endl;
            toString(banco[opc]);
            cout<<"*";
            toString(tmp);
            cout<<" = ";
            cout<<*banco[opc] * *tmp<<endl;
        break;
        case 4:
            cout<<endl;
            toString(banco[opc]);
            cout<<"/";
            toString(tmp);
            cout<<" = ";
            cout<<*banco[opc] / *tmp<<endl;
        break;
    }
    
}

void toString(Real* num1){
    Radical* radical = dynamic_cast<Radical*>(num1);
    Racional* racional = dynamic_cast<Racional*>(num1);
    if(radical!=NULL){
        cout<<radical->toString();
    }
    if(racional!=NULL){
        cout<<racional->toString();
    }

}

