/*Hacer un programa en C++ para una tienda de zapatos que tiene una
promoción de descuento para vender al mayor, esta dependerá del 
número de zapatos que se compren. Si son más de diez, se les dará 
un 10% de descuento sobre el total de la compra; si el número de
zapatos es mayor de veinte pero menor de treinta, se le otorga 
un 20% de descuento; y si son más treinta zapatos 
se otorgará un 40% de descuento. El precio de cada zapato es de $80*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int zapatos;
	cout<<"Ingrese la cantidad de zapatos comprados :";
	cin>>zapatos;
	if(zapatos>10&&zapatos<=20){
		cout<<"Usted tiene un descuento del 10%"<<endl;
		cout<<"El costo de su compra es "<<0.9*zapatos*80;
	}
	else if(zapatos>20 && zapatos<30){
		cout<<"Usted tiene un descuento del 30%"<<endl;
		cout<<"El costo de su compra es "<<0.7*zapatos*80;
	}
	else if(zapatos>30){
		cout<<"Usted tiene un descuento del 40%"<<endl;
		cout<<"El costo de su compra es "<<0.6*zapatos*80;
	}
	if(zapatos==30){
		cout<<"Usted no obtiene descuento "<<endl;
		cout<<"El costo de su compra es "<<zapatos*80;
	}
	if(zapatos<=10){
		cout<<"Usted no obtiene descuento "<<endl;
		cout<<"El costo de su compra es "<<zapatos*80;
	}
	getch();
	return 0 ;
}
