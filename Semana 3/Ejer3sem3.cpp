#include<iostream>
using namespace std;
//clase padre a superclases
class figura{
	private:
		int lados;
		double angulos;
		public: 
		figura(int,double);
		
		void virtual imprimir();
};
//subclases o clases hijas
class cuadrado:public figura{
	private:
		string color;
		public: 
		cuadrado(int,double,string);
		void imprimir();
		
};
class triangulo:public figura{
	private:
		string tipo;
		public:
			triangulo(int,double,string);
			void imprimir();
};
//constructores
figura::figura(int _lados, double _angulos){
	lados=_lados;
	angulos=_angulos;
}
cuadrado::cuadrado(int _lados, double _angulos, string _color):figura(_lados,_angulos){
	color=_color;
}
triangulo::triangulo(int _lados, double _angulos, string _tipo):figura(_lados,_angulos){
	tipo=_tipo;
}
//metodos
void figura::imprimir(){
	printf("*******************************\n");
	cout<<"Lados: "<<lados<<endl;
	cout<<"Angulos: "<<angulos<<endl;
		printf("\n*******************************\n");
}
void cuadrado::imprimir(){
	figura::imprimir();
printf("*********************************\n");
cout<<"Color: "<<color<<endl;
}
void triangulo::imprimir(){
	figura::imprimir();
	printf("*******************");
	cout<<"Tipo: "<<tipo<<endl;
}
int main(){
	//instancia de la clase padre e hijas
/*	figura f=figura(4,4);
	f.imprimir();
	
	cuadrado c=cuadrado(4,4,"Cafe");
	c.imprimir();
	
	triangulo t=triangulo(4,4,"isosceles");
	t.imprimir();*/
	figura *vector[3];
vector[0]=new cuadrado(4,4,"rojo");
vector[1]=new triangulo(3,3,"isosceles");

vector[0]->imprimir();
vector[1]->imprimir();
}






