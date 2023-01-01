/*Resolver los siguientes problemas mediante un SOLO programa ,
 utilizando un menu de opciones.(utilizar switch)
1.Determinar el precio de un billete de ida y vuelta en ferrocarril,
conociendo la distancia a recorrer (pedir la distancia al usuario)
y sabiendo que si el numero de dias es superior a 7 (pedir los dias de estancia)
y la distancia superior a 800km,el billete tiene una reduccion
del 30%.El precio por kilometro es de $2.5
2.Simular que se esta dentro de un elevador de un edificio de 25 pisos ,
el cual depende del piso en el que se encuentra muestra en pantalla
"subir"o"bajar",excepto en el piso inferior que solo existe el boton de SUBIR
 y en el ultimo que solo existe el boton de BAJAR .
nota:SOLO se pide el piso actual ,lo unico que hace el programa es mostrar "subir"o"bajar".
3.Salir*/
#include<iostream>
using namespace std;
int main(){
	char opcion;
	int dias,distancia,piso;
	//Hacemos un menu de opciones
	cout<<"\tElija una opcion:"<<endl;
	cout<<"a.Precio de un billete"<<endl;
	cout<<"b.Simulador de un elevador"<<endl;
	cout<<"c.salir"<<endl;//ninguna opcion
	cout<<"opcion :";cin>>opcion;
	//Como hay 3 posibles casos podriamos utlizar switch
	switch(opcion){
		case 'a':
			cout<<"\tDeterminamos el precio de un boleto de ida y vuelta"<<endl;
			cout<<"Indique los dias de estancia :";cin>>dias;
			cout<<"\nIndique la distancia recorrida :";cin>>distancia;
			if(dias>7 && distancia>800){
				cout<<"Tiene un descuento del 30%";
				cout<<"\nUsted paga :"<<0.7*2.5*distancia;
			}
		    else{
		    	cout<<"Usted no tiene descuento";
		    	cout<<"\nUsted paga: "<<2.5*distancia;
			};break;
		case 'b':
			cout<<"Simulamos que estamos en un elevador de 25 pisos ";
			cout<<"\nIndique el numero de piso donde se encuentra :";cin>>piso;
		if(piso==1){
			cout<<"subir";
		}
		else if(piso>1&&piso<=24){
			cout<<"Subir o bajar ";
		}
		else if(piso==25){
			cout<<"bajar";
		}
		else {
			cout<<"Numero de piso fuera de rango";
		};break;
		case 'c':
			cout<<"Salir";
	}
	return 0 ;
}
