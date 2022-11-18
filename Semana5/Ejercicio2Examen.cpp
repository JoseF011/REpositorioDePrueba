#include<iostream>
using namespace std;

class alumno{
	
	private: 
	string nombre, apellido, direccion, carrera;
	int edad, telefono, nota1, nota2, total;
	public:
		alumno(string,string,string,string,int,int,int,int,int);
		void obtenerdatos();
		void mostrardatos();
};
alumno::alumno(string _nombre, string _apellido, string _direccion, string _carrera, int _edad, int _telefono, int _nota1, int _nota2, int _total){
	nombre=_nombre;
	apellido=_apellido;
	direccion=_direccion;
	carrera=_carrera;
	edad=_edad;
	telefono=_telefono;
	nota1=_nota1;
	nota2=_nota2;
	total=_total;
}
void alumno::obtenerdatos(){
	cout<<"Ingrese su nombre: "<<endl;
	cin>>nombre;
	cout<<"Ingrese su apellido: "<<endl;
	cin>>apellido;
	cout<<"Ingrese su direccion: "<<endl;
	cin>>direccion;
	cout<<"Ingrese la carrera que cursa : "<<endl;
	cin>>carrera;
	cout<<"Ingrese su edad: "<<endl;
	cin>>edad;
	cout<<"Ingrese su numero de telefono sin guiones: "<<endl;
	cin>>telefono;
	cout<<"Ingrese la nota 1: "<<endl;
	cin>>nota1;
	cout<<"Ingrese la nota 2: "<<endl;
	cin>>nota2;
total=(nota1+nota2)/2;
}
void alumno::mostrardatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Apellido: "<<apellido<<endl;
	cout<<"Direccion: "<<direccion<<endl;
	cout<<"Carrera: "<<carrera<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Numero de telefono: "<<telefono<<endl;
	cout<<"Nota 1: "<<nota1<<endl;
	cout<<"Nota 2: "<<nota2<<endl;
	cout<<"Promedio del alumno: "<<total<<endl;
	if(total>=60){
		cout<<"Aprobado"<<endl;
	}else{
		cout<<"Reprobado"<<endl;
	}
}
int main(){
	int op;
	do{
	
	cout<<"Ingrese 1 para ver los datos o -1 para salir: "<<endl;
	cin>>op;
	switch(op){
	case 1:
	alumno a=alumno("a","bb","cc","dd",1,22,23,23,4);
	a.obtenerdatos();
	a.mostrardatos();
	break;
}
}while(op!=-1);

cout<<"Adios"<<endl;
}
