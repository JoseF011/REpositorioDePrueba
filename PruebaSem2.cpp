#include<iostream>
using namespace std;

class carro{
	
private: 	
	string nombre, modelo;
	int anio;
	
	public: 
	carro(string, string, int);
	
	void correr();
	void girar();
	

};
carro::carro(string cnombre,string cmodelo, int canio){
nombre=cnombre;
modelo=cmodelo;
anio=canio;
}

void carro::correr(){
	cout<<"El "<<nombre<<" Corre a 200km/h\n"<<endl;
}
void carro::girar(){
	cout<<"\nEl "<<nombre<<"Gira con gran precision\n"<<endl;
}

int main(){
	carro a=carro("Toyota","Corolla",2021);
	a.correr();
	a.girar();
}
