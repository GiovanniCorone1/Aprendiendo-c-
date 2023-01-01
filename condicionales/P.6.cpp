/* Indicar si un número de 3 cifras es capicúa, 
indicando también si el número de cifras no es exactamente 3.*/
#include<iostream>
using namespace std;
int main(){
	int a,b,n1;
	cout<<"ingrese un numero de tres cifras: ";cin>>n1;
	a=n1/100;
	b=n1%10;
	if(a>0){
	if(a==b){
		cout<<"El numero "<<n1<<" es capicua ";
	}
	else {
		cout<<"El numero "<<n1<<" no es capicua ";
	}}
	if(a==0){
		cout<<"El numero "<<n1<<" no tiene 3 cifras ";
	}
	else if(a>9){
		cout<<"El numero tiene mas de 3 cifras ";
	}

	
	
	return 0 ;
}
