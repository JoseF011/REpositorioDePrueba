#include<iostream>
using namespace std;
int main(){
	string nombrelibro[5],autorlibro[5];
		
	printf("*****BIBLIOTECA*****\n");

	for(int i=0;i<5;i++){
		cout<<"\nIngrese nombre del libro: "<<endl;
		cin>>nombrelibro[i];
		cout<<"\nIngrese el autor del libro: "<<endl;
		cin>>autorlibro[i];
	
	}

		printf("\n*****Impresion de datos de biblioteca*****\n");
	for(int i=0; i<5; i++){
cout<<"\nNombre del libro: "<<nombrelibro[i]<<endl;
cout<<"Autor del libro: "<<autorlibro[i]<<endl;

	}
	return 0;
}
