#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Hola Biemvenido! ingrese un Anio para caulcular si es Bisiesto o no:";
    cin>>a;
    if(a % 4 ==0 &&(a % 100 = 0 || a % 400 ==0)){
        cou<<"El anio indicado: " <<a<<"Si es Bisiesto";
    
    }else{
        cout<<"El anio  indicado: "<<a<<"No es Bisiesto";
    }

    return 0;
}