/*Determine si un numero entero es par o impar*/
#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Ingrese un numero entero:";cin>>number;
	if(number%2==0){
		cout<<"El numero "<<number<<" es par";
	}
	else{
		cout<<"El numero "<<number<<" es impar";
	}
	
	
	return 0;
}
