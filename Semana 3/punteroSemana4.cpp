#include<iostream>
using namespace std;

int main(){
	int numero[3], *ptr_numero;
	ptr_numero=numero;
	for(int i=0; i<3; i++){
		cout<<"\nPosicion: ["<<i<<"]:";
		cin>>numero[i];
	}
	for(int i=0; i<3; i++){
		cout<<"\nPosicion: "<<i<<ptr_numero;
	}
}
