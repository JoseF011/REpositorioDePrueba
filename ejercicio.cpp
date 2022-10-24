#include<iostream>
using namespace std;
int main(){
string nombre,apellido;
int edad;
double nota1,nota2,promedio;
   
   cout<<"ingrese nombre del alumno: "<<endl;
   cin>>nombre;
   cout<<"Ingrese apellido del alumno: "<<endl;
   cin>>apellido;
   cout<<"Ingrese su edad: "<<endl;
   cin>>edad;
   cout<<"Ingrese nota del primer parcial: "<<endl;
   cin>>nota1;
   cout<<"ingrese nota del segundo parcial: "<<endl;
   cin>>nota2;
   int suma=nota1+nota2;
   promedio=suma/2;
   
   cout<<"Su nombre es: "<<nombre<<endl;
   cout<<"Su apellido es: "<<apellido<<endl;
   cout<<"Su edad es: "<<edad<<endl;
   cout<<"Su promedio es: "<<promedio<<"%"<<endl;
   if(promedio>=60){
   
   cout<<"Esta aprobado, ha ganado premio"<<endl;
}else{
	cout<<"Reprobado, alumno repite la clase"<<endl;
}

if(promedio>=97){
	cout<<"Felicidades!! Ha ganado un viaje a Nicaragua y ha ganado premio por pasar la clase"<<endl;
}
if(promedio<70){
	cout<<"Necesita capacitacion"<<endl;
}
   
   
}













/*for(int i=1; i<=20;i++){
	cout<<i;
	if(i<20){
		cout<<",";
	}
}*/

