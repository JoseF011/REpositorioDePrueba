#include<iostream>
using namespace std;

template <class type> 
//este es el promedio
type promedio (type x,type y){
	return ((x+y)/2);
}



int main(){
	int opcion;
	double nota1,nota2;
	string nombre,estudio;
	
	do{
		printf("*****Notas de Alumno*****\n");
		cout<<"1. Ingrese su nombre:"<<endl;
		cout<<"2. Ingrese su carrera: "<<endl;
		cout<<"3. Nota del primer parcial: "<<endl;
		cout<<"4. Nota del segundo parcial: "<<endl;
		cout<<"5. Salir\n"<<endl;
		cout<<"Elija la opcion que desea solicitar: \n"<<endl;
		cin>>opcion;
		printf("\n\n");
		system("cls");
		
		switch(opcion){
			case 1:
				cout<<"Nombre: ";
				cin>>nombre;
			
			break;
			
			case 2:
				cout<<"Carrera tomada: ";
				cin>>estudio;
			
			break;
			
			case 3:
				cout<<"Ingrese la nota correspondiente al primer parcial: "<<endl;
				cin>>nota1;
	
			break;
			
			case 4:
				cout<<"Ingrese la nota del Segundo Parcial: ";
				cin>>nota2;
				cout<<"El promedio es de: "<<promedio<double>(nota1,nota2);
				cout<<endl;
			
				
			break;
			
			case 5: 
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Carrera: "<<estudio<<endl;
			cout<<"Promedio del alumno: "<<promedio<double>(nota1,nota2)<<endl;
			cout<<"Gracias por utilizar el servicio de promedio de notas";
			break;
			
			default:
				cout<<"Opcion incorrecta";
			
			break;
		}
	}while(opcion!=5);
}
