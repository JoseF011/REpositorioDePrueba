//mediante array pedirle al usuario en teclado
//nombre, apellido, genero, haciendo elrecorrido mediante for a cada una de estas variables e imprima el resultado
//Que pida datos adicionales: carrera, direccion y habilidades
#include<iostream>
using namespace std;
int main(){
	string array1[3],array2[3],array3[3];
		string nombre[3], apellido[3], genero[3];
	printf("*****Datos de alumnos*****\n");

	for(int i=0;i<3;i++){
		cout<<"\nIngrese nombre: "<<endl;
		cin>>nombre[i];
		cout<<"\nIngrese apellido: "<<endl;
		cin>>apellido[i];
		cout<<"\nIngrese genero: "<<endl;
		cin>>genero[i];
		cout<<"\n\n";
	}
/*	printf("\n*****Datos a imprimir*****\n");
	for(int i=0; i<3; i++){
	cout<<"\nNombre: "<<nombre[i];
	cout<<"\nApellido: "<<apellido[i];
	cout<<"\nGenero: "<<genero[i]<<endl;	
	}
	cout<<"\n\n";*/
		printf("*****Datos adicionales*****\n");

	for(int i=0;i<3;i++){
		cout<<"\nIngrese carrera: "<<endl;
		cin>>array1[i];
		cout<<"\nIngrese direccion: "<<endl;
		cin>>array2[i];
		cout<<"\nIngrese habilidad: "<<endl;
		cin>>array3[i];
		cout<<"\n\n";
	}
		printf("\n*****Datos a imprimir de datos adicionales*****\n");
	for(int i=0; i<3; i++){
	cout<<" El alumno "<<nombre[i]<<" "<<apellido[i]<<" de la carrera de "<<array1[i]<<" con genero "<<genero[i]<<"  su direccion es "<<array2[i]<<" y habilidad de "<<array3[i]<<endl;	


	}
	return 0;
}
