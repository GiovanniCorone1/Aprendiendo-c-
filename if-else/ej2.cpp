/*Escriba un programa que solicite una edad y 
determine si esta en el rango de 20 a 30 años*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int age;//ya que es una edad
	cout<<"Ingrese su edad :";
	cin>>age;
	if(age>=20 && age<=30){
	cout<<"su edad esta en el rasngo deseado :)";
	}
	else{
	cout<<"Su edad no esta en el rango deseado :(";
	}
	getch();
	return 0 ;
}
