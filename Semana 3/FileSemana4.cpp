#include<iostream>
using namespace std;
int main(){
	
	FILE *ruta;
	char escribir;
	
	ruta=fopen("Alumno.txt","r");
	if(ruta==NULL){
		printf("Ruta no valida");
		exit(1);
	}
	printf("Los datos del archivo son: ");
	escribir=getc(ruta);	
	while(feof(ruta)==0){
		printf("%c",escribir);
		escribir=getc(ruta);
	}
	if(fclose(ruta)==0){
		
	}
	
	
}
