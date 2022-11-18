#include<iostream>
using namespace std;

class usuario {
   
   private:
   	string correo, password;
   	public:
   		usuario(string,string);
   		
   		void imprimirusuario();
   		void mostrardatos();
   	
   		
};
class admin:public usuario{
	private:
		string puesto;
		public:
		admin(string,string,string);
		void mostraradmin();	
	
};
class alumnos:public usuario{
	public:
		alumnos(string,string);
		void imprimiralumno();
};
usuario::usuario(string _correo, string _password){
	correo= _correo;
	password= _password;
	void imprimirusuario();
}
admin::admin(string _correo, string _password, string _puesto):usuario(_correo, _password){
	puesto= _puesto;
	void mostraradmin();
   
}
alumnos::alumnos(string _correo, string _password):usuario(_correo, _password){

}
void admin::mostraradmin(){
	printf("*****Soy del depto admin*****\n");

}
void usuario::imprimirusuario(){
	cout<<"soy alumno... hermano de mi hermano";	
}
void usuario::mostrardatos(){
	cout<<"Correo Electronico: "<<correo<<"\nPassword: "<<password<<endl;
}
int main(){
	printf("\n******Subclase*****\n");
	admin a=admin("Fernando.galo","admingg","Manger");
	a.mostrardatos();
	a.mostraradmin();
	
	
	
		printf("\n******Subclase*****\n");
		alumnos b=alumnos("CArl.carl","arbargr");
	b.mostrardatos();
	b.imprimirusuario();
}

