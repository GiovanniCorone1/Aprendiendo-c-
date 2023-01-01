#include<iostream>
using namespace std ;
int main(){
	int numero;
	cout<<"Ingrese un numero ";cin>>numero;
	if(numero==1){
		cout<<"El numero representa la letra a ";
	}
	else if(numero==2){
		cout<<"El numero representa la letra b";
	}
	else if(numero==3){
		cout<<"El numero representa la letra c";
	}
	else if(numero==4){
		cout<<"El numero representa la letra d";
	}
	else if(numero==5){
		cout<<"El numero representa la letra e";
	}
	else {
	cout<<"El numero esta fuera de rango ";
	}
	return 0 ;
}
