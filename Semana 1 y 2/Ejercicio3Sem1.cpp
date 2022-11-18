#include<iostream>
using namespace std; 
int main(){
	 int nota,promedio;
	
for(int i=1; i<=3;i++){
	cout<<"Ingrese 3 notas acumuladaas: "<<endl;
	cin>>nota;
	promedio +=nota/3;
}
cout<<"El promedio es: "<<promedio<<endl;
		if(nota>=60){
	cout<<"Ha aprobado con exito"<<endl;	
	}else{
		cout<<"Ha reprobado"<<endl;
	}

}
