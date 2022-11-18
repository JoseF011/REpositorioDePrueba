#include<iostream>
using namespace std;

class alumno {
	//atributos
	private:
	string nombre, carrera;
	int edad, cuenta;
	//constructor
	public: 
	alumno(string, string, int, int);
	//metodo
	void dtarea();
	void estudiar();
	void mostrardatos();
	void hablar();
	void correr();
	
	
};
alumno::alumno(string cnombre, string ccarrera, int cedad, int ccuenta){
	nombre=cnombre;
	carrera=ccarrera;
	edad=cedad;
	cuenta=ccuenta;
}
void alumno::dtarea(){
	printf("\n*****Funcion 1*****");
	cout<<"\nYo desarrollo actividades..."<<endl;
	
}
void alumno::estudiar(){
	printf("\n*****Funcion 2*****");
	cout<<"\nMe levanto a estudiar a las 4:00 am\n"<<endl;
}
void alumno::mostrardatos(){
	cout<<" Mi nombre es: "<<nombre<<"\nCarrera : "<<carrera<<"\nEdad: "<<edad<<"\nCuenta: "<<cuenta<<endl;
	}
	void alumno::hablar(){
		cout<<"El estimado "<<nombre<<" habla demasiado\n"<<endl;
	}
	void alumno::correr(){
		cout<<"El alumno "<<nombre<<" corre como Usaid Volt\n"<<endl;
	}
int main(){
	//los objetos  
	
	alumno a=alumno("Fernando","Informatica",21,61951072);
	alumno b=alumno("Gabriela","Informatica",25,14362545);
	alumno c=alumno("Jose","Logistica",31,1235467);
	alumno d=alumno("Carlos","Abogado",45,234576);

	a.mostrardatos();
	a.dtarea();
	a.estudiar();
	
	b.mostrardatos();
	b.estudiar();
	
	c.mostrardatos();
	c.dtarea();

    d.mostrardatos();
    d.dtarea();
    d.estudiar();
    d.hablar();
    d.correr();
	
	

	
	
}
