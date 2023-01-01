/*Hacer un programa en C++ para una 
tienda de helado da un descuento por compra
a sus clientes con membresía dependiendo de
su tipo, sólo existen tres tipos de 
membresía, tipo A, tipo B y tipo C.
Los descuentos son los siguientes:
Tipo A 10% de descuento
Tipo B 15% de descuento
Tipo C 20% de descuento*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char membresia;
	cout<<"/tSean los tipos de membresia :"<<endl;
	cout<<"a.TIPO A:10% de descuento "<<endl;
	cout<<"b.TIPO B:15% de descuento "<<endl;
	cout<<"c.TIPO C:20% de descuento "<<endl;
	cout<<"Ingrese su tipo de membresia :";
	cin>>membresia;
	if(membresia=='a'){
		cout<<"Su descuento es del 10%";
	}
	if(membresia=='b'){
		cout<<"Su descuento es del 15%";
	}
	if(membresia=='c'){
		cout<<"Su descuento es del 20%";
	}
	getch;
	return 0 ;
}
