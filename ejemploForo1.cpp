#include<iostream>
using namespace std;
  
  class animal{
  	
  	private: 
  	string nombre, clasificacion;
  	int edad;
  	
  	public: 
  	animal(string, string, int);
  	
  	void correr ();
  	void cazar ();
  	void comer ();
  	void mostrardatos();

  	
  	
  	
  }; 
  animal::animal(string anombre, string aclasificacion, int aedad){
  	nombre=anombre;
  	clasificacion=aclasificacion;
  	edad=aedad;
  }
  void animal::cazar(){
  	printf("\n*****Funcion 1*****\n");
  	cout<<"El "<<nombre<<" caza de manera impresionante\n"<<endl;
  }
  void animal::comer(){
  	printf("\n*****Funcion 2*****\n");
  	cout<<"El "<<nombre<<" Es carnivoro, come 5 veces al dia"<<endl;
  }
  void animal::correr(){
  	printf("\n*****Funcion 3*****\n");
  	cout<<"El "<<nombre<<" corre muy rapido "<<endl;
  }
  void animal::mostrardatos(){
  	cout<<"Nombre: "<<nombre<<"\nClasificacion: "<<clasificacion<<"\nEdad: "<<edad<<endl;
  }
  int main(){
  	animal a=animal("Guepardo","Mamifero",10);
  	animal b=animal("Leon","Mamifero",15);
  	
  	a.mostrardatos();
  	a.cazar();
  	a.comer();
  	
  	b.mostrardatos();
  	b.cazar();
  	b.comer();
  }
  
