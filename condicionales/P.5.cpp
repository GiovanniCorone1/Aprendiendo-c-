/*Ordenar tres numeros de mayor a menor*/
#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	//Pedimos los 3 numeros
	cout<<"\tIngrese 3 numeros diferentes "<<endl;
	cout<<"Ingrese el primer numero: ";cin>>n1;	
	cout<<"Ingrese el segundo numero: ";cin>>n2;
	cout<<"Ingrese el segundo numero: ";cin>>n3;
	if(n1>n2&&n2>n3){
		cout<<"El orden de los numeros es :"<<endl;
		cout<<n1<<" "<<n2<<" "<<n3;
	}
	else if(n1>n3&&n3>n2){
		cout<<"El orden de  los numeros es:"<<endl;
		cout<<n1<<" "<<n3<<" "<<n2;
	}
	else if(n3>n2&&n2>n1){
		cout<<"El orden de los numeros es:"<<endl;
		cout<<n3<<" "<<n2<<" "<<n1; 
	}
	else if(n3>n1&&n1>n2){
		cout<<"El orden de los numeros es:"<<endl;
		cout<<n3<<" "<<n1<<" "<<n2; 
	}
	else if(n2>n3&&n3>n1){
		cout<<"El orden de los numeros es:"<<endl;
		cout<<n2<<" "<<n3<<" "<<n1; 
	}
	else if(n2>n1&&n1>n3){
		cout<<"El orden de los numeros es:"<<endl;
		cout<<n2<<" "<<n1<<" "<<n3; 
	}
	else{
		cout<<"Ha ingresado 2 o 3 numeros iguales ";
	}
	
	
	
	
	
	return 0 ;
}
