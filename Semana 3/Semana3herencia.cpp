#include<iostream>
using namespace std;

 class persona{
 	private:
 		string nombre,apellido;
 		int edad;
 		double altura;
 	public:
	 persona(string,string,int,double);
	 
	 void mostrarpersona();
	 	
 	
 };
 class empleado:public persona{
 	private:
 	double id;
 	public:
 		empleado(string,string,int,double,double);
 		void mostrarempleado();
 };
 class Edgardo:public persona{
 	private:
 		string habilidad;
 		public:
 			Edgardo(string,string,int,double,string);
 		void mostrarEdgardo();
 };
 persona::persona(string _nombre, string _apellido, int _edad, double _altura){
 	nombre= _nombre;
 	apellido= _apellido;
 	edad= _edad;
 	altura= _altura;
 }
 void persona::mostrarpersona(){
 	cout<<"Nombre: "<<nombre<<"\nApellido: "<<apellido<<"\nEdad: "<<edad<<"\nAltura: "<<altura<<endl;
 }
 //constructor subclase empleado
 empleado::empleado(string _nombre, string _apellido, int _edad, double _altura, double _id):persona(_nombre, _apellido, _edad, _altura){
 	void mostrarempleado();
 	id=_id;
 }
 Edgardo::Edgardo(string _nombre, string _apellido, int _edad, double _altura, string _habilidad):persona(_nombre, _apellido, _edad, _altura){
 	void mostrarEdgardo();
 	habilidad= _habilidad;
 }
 void empleado::mostrarempleado(){
 	cout<<"\nID: "<<id<<endl;
 	cout<<"Soy empleado de la empresa fefaeegvd"<<endl;
 }
 void Edgardo::mostrarEdgardo(){
 	cout<<"\nMe gusta jugar a la play"<<endl;
 }
 int main(){
 	empleado e=empleado("Fernando","Galo",21,1.74,34.34);
 	e.mostrarpersona();
 	e.mostrarempleado();
 }
