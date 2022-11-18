#include<iostream>
using namespace std;

template <class type> 
type suma (type x,type y){
	return (x+y);
}

template <class type> 
type resta (type x,type y){
	return (x-y);
}

template <class type> 
type multiplicacion (type x,type y){
	return (x*y);
}
template <class type> 
type division (type x,type y){
	return (x/y);
}

int main(){
	
	int opcion,valor1,valor2;

	printf("**********Calculadora Simple**********\n");
	cout<<"1.Suma"<<endl;
	cout<<"2.Resta"<<endl;
	cout<<"3.Multiplicacion"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"Que operacion desea realizar: "<<endl;
	cin>>opcion;
	cout<<endl;
	
	cout<<"Ingrese el primer valor: "<<endl;
	cin>>valor1;
	cout<<endl; 
	cout<<"Ingrese el segundo valor: "<<endl;
	cin>>valor2;
	cout<<endl;
	
	switch (opcion){
		
		case 1:
			cout<<"*****Resultados*****"<<endl;
		cout<<"La suma de los enteros es: "<<suma(valor1,valor2);
		break;
		
		case 2:
			cout<<"*****Resultados*****"<<endl;
		cout<<"La resta de los enteros es: "<<resta(valor1,valor2);
		break;
		
		case 3:
			cout<<"*****Resultados*****"<<endl;
		cout<<"La multiplicacion de los enteros es: "<<multiplicacion(valor1,valor2);
		break;
		
		case 4:
			cout<<"*****Resultados*****"<<endl;
		cout<<"La division de los numeros es: "<<division<double>(valor1,valor2);
		break; 		
	}
}
