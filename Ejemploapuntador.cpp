#include <iostream>
using namespace std;
int main(){
	
	//Declarar el apuntador 
	int *numero; 

	//Inicializar  el apuntador
	numero= new int;
	
	// Asignarle un valor a este apuntador
	*numero=4;
	
	//Muestra el valor asignado 
	cout<<"El valor asignado: "<<*numero<<endl;
	
	
    //Ahora Piderle al usuario un valor 
    cout<<"Escriba un numero entero: ";
    cin>>*numero; 
    //Mostrarle ese valor asignado 
    cout<<"El valor asignado por el usuario es: "<<*numero<<endl;
    
    //Destruye la variable y libera Memoria 
    delete numero; 
    
   
}
