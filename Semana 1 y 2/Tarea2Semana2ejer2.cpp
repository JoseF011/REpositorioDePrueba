#include<iostream>
using namespace std;
  
  class lavadora{
  	
  	private: 
  	string nombre, marca, modelo;
  	int duracion,codigolavadora;
  	
  	public: 
  	lavadora(string, string, string, int,int);
  	
  	void lavar ();
  	void secar ();
  	void usosdiarios ();
  	void encender();
  	void mostrardatos();	
  	
  }; 
  lavadora::lavadora(string anombre, string amarca,string amodelo, int aduracion,int acodigolavadora){
  	nombre=anombre;
    marca=amarca;
    modelo=amodelo;
    duracion=aduracion;
    codigolavadora=acodigolavadora;
  }
  void lavadora::encender(){
  	printf("\n*****Funcion 1*****\n");
  	cout<<nombre<<" enciende en 5 segundos\n "<<endl;
  }
  void lavadora::usosdiarios(){
  	printf("\n*****Funcion 2*****\n");
  	cout<<nombre<<" Suele ser usada 3 veces al dia para su alargue de vida\n"<<endl;
  }
  void lavadora::lavar(){
  	printf("\n*****Funcion 3*****\n");
  	cout<<nombre<<" Tiene 3 ciclos de lavado\n "<<endl;
  }
   void lavadora::secar(){
  	printf("\n*****Funcion 4*****\n");
  	cout<<nombre<<" Hace la funcion de secado en 5 minutos\n "<<endl;
  }
  void lavadora::mostrardatos(){
  	cout<<"Nombre: "<<nombre<<"\nMarca: "<<marca<<"\nModelo: "<<modelo<<"\nDuracion: "<<duracion<<" anios "<<"\nCodigo de la lavadora: "<<codigolavadora<<endl;
}
  int main(){
 lavadora a=lavadora("LsPro","Samsung","Todoenuno",10,3256);
 lavadora b=lavadora("Doxe","Lg","LavaySeca",8,32564);
  a.mostrardatos();
  a.encender();
  a.usosdiarios();
  a.lavar();
  a.secar();
  
   b.mostrardatos();
  b.encender();
  b.usosdiarios();
  b.lavar();
  b.secar();
  
  }
  
