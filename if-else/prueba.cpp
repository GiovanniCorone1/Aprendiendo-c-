/*Calcular el total que una persona debe pagar en una llantera, si el precio de cada llanta es de $800 si 
se compran menos de 5 llantas y de $700 si se compran 5 o más.*/
#include<iostream>
using namespace std;
int main(){
int llantas;
cout<<"Indique la cantidad de llantas que comprara: "<<endl;
cin>>llantas;
if(llantas<5){
    cout<<"El precio de cada llantas es $800"<<endl;
    cout<<"El costo de las llantas compradas es "<<llantas*800;
}
else{
    cout<<"El precio de cada llanta es $700"<<endl;
    cout<<"El costo total es "<<llantas*700;
}


    return 0;
}
