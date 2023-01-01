/*Leer un numero del 1 al 5 e indicar que vocal representa
ejemplo:si es 1 representa la vocal a*/
#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Ingrese un numero : ";cin>>numero;
     //El numero que ingreamos tomara 5 casos por eso usamos switch
     switch(numero){
     	case 1 :cout<<"Representa la letra a ";break;//primer caso
     	case 2 :cout<<"Representa la letra b ";break;//segundo caso
     	case 3 :cout<<"Representa la letra c ";break;//tercer caso
     	case 4 :cout<<"Representa la letra d ";break;//primer caso
     	case 5 :cout<<"Representa la letra e ";break;//segundo caso
     	default :cout<<"El numero ingresado esta fuera de rango "; 	
	 }
	
	
	
	return 0 ;
}
