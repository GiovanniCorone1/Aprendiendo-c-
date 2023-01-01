/*Pedir tres cantidades,hallar su promedio e indicar si se aprobo o no*/
#include<iostream>
using namespace std;
int main(){
	double n_1,n_2,n_3,promedio;
	//Pedimos las 3 primeras notas
	cout<<"Ingrese su primera nota :";cin>>n_1;
	cout<<"\nIngrese su segunda nota :";cin>>n_2;
	cout<<"\nIngrese su tercera nota :";cin>>n_3;
	promedio=(n_1+n_2+n_3)/3;
	cout<<"\nSu promedio es "<<promedio;
	//Si es mas de 11 aprobo ,caso contrario desaprobo
	if(promedio>=11){
		cout<<"\nUsted aprobo con nota "<<promedio;
	} 
	else{
		cout<<"\nUsted desaprobo con nota "<<promedio;
	}
	return 0;
}
