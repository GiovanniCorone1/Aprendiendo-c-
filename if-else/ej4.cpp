/*para determinar el aumento de un trabajador, se debe tomar en cuenta que si 
ganaba más de $2000 tendrá un aumento del 5%, 
si generaba menos de $2000 su aumento será de un 10%.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double sueldo,nsueldo;
	cout<<"Ingrese su sueldo :";
	cin>>sueldo;
	if(sueldo>2000){
		nsueldo=1.05*sueldo;
		cout<<"Su aumento es del 5%"<<endl;
		cout<<"Su nuevo sueldo es "<<nsueldo;
	}
	else if(sueldo==2000){
		cout<<"Su sueldo es 2000";
	}
	if(sueldo<2000){
		nsueldo=1.1*sueldo;
		cout<<"Su aumento es del 10%"<<endl;
		cout<<"Su nuevo sueldo es "<<nsueldo;
	}
	getch();
	return 0;
}
