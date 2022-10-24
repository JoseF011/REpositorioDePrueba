#include<iostream>
using namespace std;
int main (){
	
	printf("***********Impuestos de productos**********\n");
	double monto, iva,total;
	while (iva!=-1){
		cout<<"Calcular Iva: "<<endl;
		cin>>iva;
		if(iva!=-1){
			total=iva*0.15;
			cout<<"El iva es: "<<total<<endl;
			
		}
	}
	
}
