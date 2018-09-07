#include "Real.h"
#include "Radical.h"
#include "Racional.h"
#include <iostream>
#include <vector>

//√
void AggRacional();
void AggRadical();
void RealizarOperacion();
void printBanco();

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