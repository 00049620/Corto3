#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int option=0, NumSorpr=77, conta=0, Gana=0;
    do{
        cuot<<"Bienvenido! Prueba suerte " <<endl<<endl;
        cuot<<"1: Prueba numero entre 1 al 100 al azar para ganar"<<endl;
        cout<< "0: Salir..."<<endl;
        cout<<"option:";
        cin>>option;

    switch(option){
        conta++;
        if(conta<=5){

            cout<<endl"Ingresa el numero Mucha suerte!!! :"<<endl;
            cin>>Gana;
            if (Gana == NumSorpr){
                cout<<endl<<"Has ganado Felicidades" <<endl<<endl;
            }
            else
            cout<<"Vuelve a intentar estas muy Cerca" <<endl<<endl;
        }
    else{
        cout<<endl<<endl " Se acabaron el numero de intentos , Perdiste:
        option=0;

}

    break;
    case0;
    default;
    cout<<endl<<"Si desea inetmtar de nuevo solo ingrese de nuevo al sitema" <<endl;
    }


    }While(option! = 0);
}