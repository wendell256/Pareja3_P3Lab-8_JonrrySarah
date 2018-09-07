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
void printBanco2();

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