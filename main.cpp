#include "Real.h"
#include "Radical.h"

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