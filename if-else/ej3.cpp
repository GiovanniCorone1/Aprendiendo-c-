 /*Hacer un programa en C++ para determinar el 
 promedio de tres notas y determinar si el estudiante aprobó o no.*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int note1,note2,note3,prom;
	//pedimos sus tres notas
	cout<<"Ingrese su primera nota :";
	cin>>note1;
	cout<<"Ingrese su segunda nota :";
	cin>>note2;
	cout<<"Ingrese su tercera nota :";
	cin>>note3;
	prom=(note1+note2+note3)/3 ;//Sacamos su promedio
	cout<<"Su promedio es :"<<prom<<endl;;
	if(prom>=11){
		cout<<"Usted aprobo ";
	}
	else{
		cout<<"Usted desaprobo";
	}
	getch();
	return 0 ;
}
