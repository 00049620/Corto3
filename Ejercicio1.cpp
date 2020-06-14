#include <iostream>
#include <cmath>
using namespace std;

float suma (float num3 , float num4);
float trabajo (float n , float h);
float dedu1,  dedu2,  dedu3, resu1;
int main(){
     
     int num1;
     float hh, h3;

     cout<<"Ingrese el numero de usuarios: ";
     cin>>num1;

     for(int i=0; i<num1;i++){
         cout<<endl<<"Ingrese las horas trabajadas: ";
         cin>>hh;
         cout<<endl<<"Ingrese las horas  extras trabajadas: ";
         cin>>h3;
         cout<<endl<<"Su salario actual es de $"<<suma(hh, h3)<<endl;
          cout<<endl<<"Su salario actual con descuento es de $"<<trabajo(hh, h3);
           cout<<endl<< "se le decontara $"<<dedu3;
     }
     return 0;
}

float suma(float num3, float num4){
    float resulta;
    resulta =((num3*1.75)+(num4*2.50));

    return resulta;
}

float trabajo( float h, float h1){
    float resu;
    resu1=(h*1.75)+(h1*2.50);

dedu1= resu*0.04;
dedu2= resu*0.0625;
dedu3= dedu1+dedu2;
resu=(h*1.75)+(h1*2.50)-dedu3;
if(resu<=500){
    resu==resu;

}else{
    resu-0.010;
}
return resu;
}