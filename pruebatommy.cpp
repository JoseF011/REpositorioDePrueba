#include<iostream>
using namespace std;
int main(){
	int opcion,suma,resta,multi;
	double val1,val2,div;
	cout<<"1. Suma"<<endl;
	cout<<"2. Resta"<<endl;
	cout<<"3. Multiplicacion"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Mayor de los enteros"<<endl;	
	cout<<"Ingrese el primer valor: "<<endl;
	cin>>val1;
	cout<<"Ingrese el segundo valor: "<<endl;
	cin>>val2;
	
	cout<<"Elija una opcion del 1 al 5: "<<endl;
	cin>>opcion;
	
	switch (opcion){
		case 1:
			suma=val1+val2;
			cout<<"La suma de los enteros es: "<<suma<<endl;
			break;
		case 2:
				 resta=val1-val2;
				cout<<"La resta de los enteros es: "<<resta<<endl;
				break;
				case 3:
					 multi=val1*val2;
					cout<<"La multipliacion de los enteros es: "<<multi<<endl;
					break;
					case 4: 
					 div=val1/val2;
					cout<<"La division de los enteros es: "<<div<<endl;
					break;
					case 5:
						if(val1>val2){
							cout<<val1<<"es mayor"<<endl;
						}else{
							cout<<val2<<"es mayor"<<endl;
							break;
						default: 
						cout<<"numero no valido";
						break;
						}
	}
	
	
}
