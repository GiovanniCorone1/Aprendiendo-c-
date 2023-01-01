/*Hacer un programa en C++ para ayudar a un trabajador
a saber cuál será su sueldo semanal, se sabe que si 
trabaja 40 horas o menos, se le pagará $20 por hora, 
pero si trabaja más de 40 horas entonces las horas 
extras se le pagarán a $25 por hora.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int horas;
	cout<<"Ingrese el numero de horas trabajadas :";
	cin>>horas;
	if(horas<=40){
		cout<<"Se le pagara "<<horas*20;
	}
	else{
		cout<<"Se le pagara "<<40*20+(horas-40)*25;
	}
	getch();
	return 0 ;
}

