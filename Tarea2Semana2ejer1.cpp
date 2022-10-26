#include<iostream>
using namespace std;
  
  class empleado{
  	
  	private: 
  	string nombre, apellido, posicion;
  	int edad,codigoempleado;
  	
  	public: 
  	empleado(string, string, string, int,int);
  	
  	void horariotrabajar ();
  	void comer ();
  	void posiciondetrabajo ();
  	void aseoempresa();
  	void mostrardatos();

  	
  	
  	
  }; 
  empleado::empleado(string anombre, string aapellido,string aposicion, int aedad,int acodigoempleado){
  	nombre=anombre;
  	apellido=aapellido;
  	posicion=aposicion;
  	edad=aedad;
  	codigoempleado=acodigoempleado;
  }
  void empleado::posiciondetrabajo(){
  	printf("\n*****Funcion 1*****\n");
  	cout<<nombre<<" es "<<posicion<<endl;
  }
  void empleado::horariotrabajar(){
  	printf("\n*****Funcion 2*****\n");
  	cout<<nombre<<" Trabaja de 6:00 am a 8:00 pm\n"<<endl;
  }
  void empleado::comer(){
  	printf("\n*****Funcion 3*****\n");
  	cout<<nombre<<" Tiene horario de comida a las 9:00 am y a las 12:00 pm "<<endl;
  }
   void empleado::aseoempresa(){
  	printf("\n*****Funcion 4*****\n");
  	cout<<nombre<<" Le toca aseo los dias lunes y jueves a las 7:30 pm\n "<<endl;
  }
  void empleado::mostrardatos(){
  	cout<<"Nombre: "<<nombre<<"\nApellido: "<<apellido<<"\nPuesto de trabajo: "<<posicion<<"\nEdad: "<<edad<<"\nCodigo del empleado: "<<codigoempleado<<endl;
}
  int main(){
 empleado a=empleado("Fernando","Galo","Manager",21,1243);
  a.mostrardatos();
  a.posiciondetrabajo();
  a.horariotrabajar();
  a.comer();
  a.aseoempresa();
  
  empleado b=empleado("Gabriel","Lopez","Asistente",30,124345);
  b.mostrardatos();
  b.posiciondetrabajo();
  b.horariotrabajar();
  b.comer();
  b.aseoempresa();
  }
  
