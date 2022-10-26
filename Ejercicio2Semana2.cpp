#include<iostream>
using namespace std;
  
  class docente{
  	
  	private: 
  	string nombre, apellido, carrera;
  	int identificacion;
  	
  	public: 
  	docente(string, string,string, int);
  	
  	void darclase ();
  	void asignartarea ();
  	void revisartareas ();
  	void mostrardatos();

  	
  	
  	
  }; 
  docente::docente(string anombre, string aapellido, string acarrera, int aidentificacion){
  	nombre=anombre;
  apellido=aapellido;
  	carrera=acarrera;
  	identificacion=aidentificacion;
  }
  void docente::darclase(){
  	printf("\n*****Funcion 1*****\n");
  	cout<<"El "<<nombre<<" imparte la clase eficazmente\n"<<endl;
  }
  void docente::asignartarea(){
  	printf("\n*****Funcion 2*****\n");
  	cout<<"El "<<nombre<<" asigna tareas una vez a la semana"<<endl;
  }
  void docente::revisartareas(){
  	printf("\n*****Funcion 3*****\n");
  	cout<<"El "<<nombre<<" revisa las tareas el dia domingo "<<endl;
  }
  void docente::mostrardatos(){
  	cout<<"Nombre: "<<nombre<<"\nApellido: "<<apellido<<"\nCarrera: "<<carrera<<"\nIdentificacion: "<<identificacion<<endl;
  }
  int main(){
  	docente a=docente("Carlos","Ramirez","Informatica",124527359243);
  	docente b=docente("Josue","Galo","Informatica",1245277453243);
  	a.mostrardatos();
  	a.darclase();
  	a.revisartareas();
  	a.asignartarea();
  	
  		b.mostrardatos();
  	b.darclase();
  	b.revisartareas();
  	b.asignartarea();
  	
  	
  }
  
