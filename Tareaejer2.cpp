#include<iostream>
using namespace std;
int main(){
	string nombre;
	int sueldo;
	double aumento,ajusteSueldo, valorAumento, total;
	cout<<"Ingrese el nombre del empleado: "<<endl;
	cin>>nombre;
	cout<<"Ingrese el sueldo del empleado: "<<endl;
	cin>>sueldo;
	cout<<"Ingrese el porcentaje de aumento del empleado: "<<endl;
	cin>>aumento;
	
	ajusteSueldo=sueldo/100;
	valorAumento=ajusteSueldo*aumento;
	total=sueldo+valorAumento;
	
	cout<<"Nombre del empleado: "<<nombre<<endl;
	cout<<"El aumento del sueldo es de: "<<valorAumento<<endl;
	cout<<"El total de su salario con aumento es de: "<<total<<endl;
	
	
}
