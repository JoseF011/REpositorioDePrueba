#include<iostream>
using namespace std;

template <class type> 

type valor (type x){
	//retornamos el valor para la devolucion de los ejemplos
	return x;
}

int main(){

cout<<"*****EJEMPLOS DE VARIABLES EN PLANTILLAS*****"<<endl;

cout<<"Uso de plantilla con valores enteros: "<<valor(125)<<endl;

	cout<<"\nUso de plantilla con valores tipo Double: "<<valor(4.55555)<<endl;
	
cout<<"\nUso de plantilla con variable tipo Char, un solo caracter: "<<valor('S')<<endl;

	cout<<"\nUso de plantilla con variable String, para palabras: "<<valor("Me gusta la clase")<<endl;
	
cout<<"\nUso de plantilla con valores Short: "<<valor(-75)<<endl;

}
