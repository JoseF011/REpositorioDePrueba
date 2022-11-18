#include<iostream>
using namespace std;

class persona{

	private: 
	string nombre, apellido;
	int edad;
	public:
		persona(string,string,int);
		void hablar();
		void reir();
		void cantar();
		void estudiar();
		void mostrardatos();
	};
	class JuanPerez:public persona{
		public:
			JuanPerez(string,string,int);
			void programar();
			void jugar();
			void emprender();
	};	
	class futbolista:public persona{
		public:
			futbolista(string,string,int);
			void jugartenis();
			void anotargoles();
	};
	class polache:public persona{
		public:
			polache(string, string, int);
				
	};
	persona::persona(string _nombre, string _apellido, int _edad){
		nombre=_nombre;
		apellido=_apellido;
		edad=_edad;
	}
	JuanPerez::JuanPerez(string _nombre, string _apellido, int _edad):persona(_nombre,_apellido,_edad){
		
	}
	futbolista::futbolista(string _nombre, string _apellido, int _edad):persona(_nombre, _apellido, _edad){
		
	}
	polache::polache(string _nombre, string _apellido, int _edad):persona(_nombre, _apellido, _edad){
		
	}
	void persona::hablar(){
		cout<<"Me gusta mucho hablar la verdad\n"<<endl;
	}
	void persona::reir(){
		cout<<"Me rio hasta por el chiste mas malo\n"<<endl;
	}
	void persona::cantar(){
		cout<<"Tengo talento de canto\n"<<endl;
	}
	void persona::estudiar(){
		cout<<"Soy bueno para las finanzas\n"<<endl;
	}
	void JuanPerez::programar(){
		cout<<"Soy un master de progra\n"<<endl;
	}
	void JuanPerez::jugar(){
		cout<<"Me gustan mucho los videojuegos\n"<<endl;
	}
	void JuanPerez::emprender(){
		cout<<"Soy emprendedor\n"<<endl;
	}
	void futbolista::jugartenis(){
		cout<<"Soy campeon nacional de Tennis\n"<<endl;
	}
	void futbolista::anotargoles(){
		cout<<"Tambien me gusta el futbol\n"<<endl;
	}
	void persona::mostrardatos(){
		cout<<"Nombre: "<<nombre<<endl;
		cout<<"Apellido: "<<apellido<<endl;
		cout<<"Edad: "<<edad<<endl;
	}
	int main(){
		persona a=persona("Juan","Carlos",25);
		a.mostrardatos();
		a.hablar();
		a.reir();
		a.cantar();
		a.estudiar();
		
		JuanPerez b=JuanPerez("Juan","Perez",30);
		b.mostrardatos();
		b.programar();
		b.jugar();
		b.emprender();
		
		futbolista c=futbolista("Pedro","Lopez",21);
		c.mostrardatos();
		c.jugartenis();
		c.hablar();
		c.reir();
		c.cantar();
		c.estudiar();
		c.anotargoles();
		
		polache d=polache("Paul","Douglas",35);
		d.mostrardatos();
		d.hablar();
		d.cantar();
		d.reir();
		d.estudiar();
		
		
	}
