//clase persona
class persona{
	//atributos dentro de la clase persona
	private:
	string nombre,apellido;
	int edad, telefono;
	
	
	//metodos
	public:
	void correr();
	void comer();
	void trabajar();
	
	public:
		persona(string nombre, string apellido, int edad, int telefono);
};
//constructoe de la persona

persona::persona(string _nombre. string _apellido, int _edad, int _telefono){
nombre= _nombre;
apellido= _apellido;
edad= _edad;
telefono= _telefono;	
}
void imprimir(){
	cout<<" Nombre: "<<nombre<<" apellido: "<<apellido<<" Edad: "<<edad<<" Telefono: "<<telefono<<endl;
}
void correr(){
	cout<<"Me gusta el ejercicio"<<endl;
}
int main(){
	persona p1=persona;
	persona p2=persona;
	p1.persona("Garbriel","Lopez",21,321465);
    p1.comer();
    p1.correr();
    
    p2.persona("Carlos","Suarez",34,321465);
    
    
}
