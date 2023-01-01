/*Ejercicio 8: Escribe un programa que lea de la 
entrada estándar tres números. Después debe leer un cuarto número
e indicar si el número coincide con alguno de los introducidos con anterioridad.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double number1,number2,number3,number4;
	cout<<"Introduzca el primer numero :";
	cin>>number1;
	cout<<"Introduzca el segundo numero :";
	cin>>number2;
	cout<<"Introduzca el tercer numero :";
	cin>>number3;
	cout<<"Introduzca el cuarto numero :";
	cin>>number4;
	if(number1==number4){
		cout<<"\nEl primer numero y el ultimo numero son iguales";
	}
	else{
	cout<<"\nEl primer numero y el ultimo numero son diferentes";
    }
	if(number2==number4){
		cout<<"\nEl segundo numero y el ultimo numero son iguales";
	}
	else{
	cout<<"\nEl segundo numero y el ultimo numero son diferentes";
	}
	if(number3==number4){
		cout<<"\nEl tercer numero y el ultimo numero son iguales";
	}
	else{
	 cout<<"\nEl tercer numero y el ultimo numero son diferentes";
    }
	getch();
	return 0 ;
}


