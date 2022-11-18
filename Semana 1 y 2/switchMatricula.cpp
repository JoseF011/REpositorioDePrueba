#include<iostream>
using namespace std;
int main(){
	char letra;
	string palabra;
	printf("*****Matricula Ceutec*****\n\n");
	cout<<"Elije una clase a matricular: "<<endl;
	cout<<"a. Programacion  b. Matematicas   c. Historia";
	cin>>letra;
	switch(letra){
		case 'a':
			case 'A':
			palabra="Ha matriculado Programacion...";
			break;
			case 'b':
				case 'B':
				palabra="Ha matriculado Matematicas...";
				break;
				case 'c':
					case 'C':
					palabra="Ha matriculado Historia...";
					break;
	default:
		palabra="Opcion no existe";
}
cout<<palabra;	
}
	


