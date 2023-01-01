/*Cree euna consola que al ingresar un 
numero se indique si es positivo o negativo*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double number;//ya que es un numero real
	cout<<"Ingrese un numero :";
	cin>>number;
	//Recordemos que mayores de cero son positivos
	if(number>0){
		cout<<"El numero es positivo ";
		}
	//menores a cero son negativos
	if(number<=0){
	cout<<"El numero es negativo";
    }
    //el cero es neutro
    if(number==0){
	cout<<"El numero es neutro ";
    }
	getch();
	return 0 ;
}
