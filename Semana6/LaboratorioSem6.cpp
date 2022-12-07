#include<iostream>
#include <cstdlib>
using namespace std;
int main(){	
	int op;
	system("color f9");  
		do{
	cout<<"1. Crear un caracter"<<endl;
	cout<<"2. Crear un numero entero"<<endl;
	cout<<"3. Crear un numero decimal"<<endl;
	cout<<"4. Salir del programa"<<endl;
	cout<<"Ingrese una opcion a realizar: "<<endl;

	cin>>op;
		system("cls");	
	
	switch(op){
		case 1:	
			char caracteringresar;
			cout<<"Ingrese caracter para imprimir en pantalla: "<<endl;
			cin>>caracteringresar;
			cout<<"Caracter ingresado por el usuario: "<<caracteringresar<<endl;
			break;	
		
			case 2:	
				int enteroingresar;
				cout<<"Ingrese un entero: "<<endl;
				cin>>enteroingresar;
				cout<<"Entero ingresado por el usuario: "<<enteroingresar<<endl;
				
				
				break;
				case 3:
					double decimalingresado;
					cout<<"Ingrese un decimal: "<<endl;
					cin>>decimalingresado;
					cout<<"Decimal ingresado por el usuario: "<<decimalingresado<<endl;
					break;
			
		
				case 4: 
				cout<<"Ha salido el programa"<<endl;
				cout<<"Que le vaya bonito"<<endl;
			
				break;
				
				default: 
				cout<<"Opcion no valida"<<endl;
				break;
				
		

}
}while(op!=4);
}
