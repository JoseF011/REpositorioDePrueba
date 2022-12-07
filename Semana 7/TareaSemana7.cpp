#include <iostream>
#include <iomanip>
#include <fstream>
#include <string> 
#include<stdio.h>
#include <cstdlib>
using namespace std;

void crearArchivo(){
	  string nombreArchivo;
    
    cout << "Introduzca el nombre "
         << "del archivo a crear: ";
    cin >> nombreArchivo;
    
    ofstream archivo(
             nombreArchivo.data(),
             ios::out |
             ios::app);

    if(!archivo)
    {
         cout << "Error.  No se pudo"
              << " abrir el archivo."
              << endl;
         system("pause");
         return;
    } // Verificación del archivo.
    
    // 2. Guardar información.
    int idCliente=0;
    char nombre[20], apellido[20];
    double ingreso;
    
    cout << "Intro. id cliente "
         << " (0 para terminar) : ";
    cin >> idCliente;
    while(idCliente  > 0)
    {
         cout << "Intro. nombre: ";
         cin >> nombre;
         cout << "Intro. apellido: ";
         cin >> apellido;
         cout << "Intro. ingreso: ";
         cin >> ingreso;
         
         // Guardar datos en archivo.
         archivo << idCliente << " "
                 << nombre << " "
                 << apellido << " "
                 << ingreso << endl;
                 
         cout << "Intro. id cliente "
         << " (0 para terminar) : ";
         cin >> idCliente; 
    } // Fin de while.
    
    // 3. Cerrar archivo.
    archivo.close();
    
    cout << "\nOperacion finalizada"
         << " con exito.\n\n";
    
    system("pause");
    return;
}

void abrirArchivo(){
	string nombreArchivo;
    bool encontrado=false;
    
    cout << "Introduzca el nombre "
         << "del archivo a abrir: ";
    cin >> nombreArchivo;
    
    ifstream archivo(
             nombreArchivo.data(),
             ios::in);

    if(!archivo)
    {
         cout << "Error.  No se pudo"
              << " abrir el archivo."
              << endl;
         system("pause");
         return;
    } // Verificación del archivo.
    
    // 2. Leer información.
    int idCliente=0;
    char nombre[20], apellido[20];
    double ingreso;
    
    cout << '\n'
         << setw(10) << "Codigo"
         << setw(15) << "Nombre"
         << setw(15) << "Apellido"
         << setw(15) << "Ingreso L."
         << fixed << setprecision(2)
         << endl;
    for(int i=0; i<55; i++)
        cout << '=';
    
    cout << endl;
    
    archivo >> idCliente
            >> nombre
            >> apellido
            >> ingreso;
            
    while(!archivo.eof())
    {
         cout << setw(10) << idCliente
              << left << setw(15) << nombre
              << setw(15) << apellido
              << right << setw(15) << ingreso
              << endl;

         
         archivo >> idCliente
                 >> nombre
                 >> apellido
                 >> ingreso;
    } // Fin de while.
      
    // 3. Cerrar archivo.
    archivo.close();
    
    cout << "\nOperacion finalizada"
         << " con exito.\n\n";
    
    system("pause");
    return;
}

void buscarArchivo(){
	  string nombreArchivo;
    bool encontrado=false;
    
    cout << "Introduzca el nombre "
         << "del archivo a abrir: ";
    cin >> nombreArchivo;
    
    ifstream archivo(
             nombreArchivo.data(),
             ios::in);

    if(!archivo)
    {
         cout << "Error.  No se pudo"
              << " abrir el archivo."
              << endl;
         system("pause");
         return;
    } // Verificación del archivo.
    
    // 2. Leer información.
    int idCliente=0, idBuscar=0;
    char nombre[20], apellido[20];
    double ingreso;
    
    cout << "Buscar cliente, Id: ";
    cin >> idBuscar;
    
    cout << '\n'
         << setw(10) << "Codigo"
         << setw(15) << "Nombre"
         << setw(15) << "Apellido"
         << setw(15) << "Ingreso L."
         << fixed << setprecision(2)
         << endl;
    for(int i=0; i<55; i++)
        cout << '=';
    
    cout << endl;
    
    archivo >> idCliente
            >> nombre
            >> apellido
            >> ingreso;
            
    while(!archivo.eof())
    {
         if(idCliente == idBuscar) {
              encontrado = true;
              cout << setw(10) << idCliente
                   << left << setw(15) << nombre
                   << setw(15) << apellido
                   << right << setw(15) << ingreso
                   << endl;
         }
         
         archivo >> idCliente
                 >> nombre
                 >> apellido
                 >> ingreso;
    } // Fin de while.
    
    if(!encontrado) {
         cout << "El cliente no existe...\n";
    }
    
    // 3. Cerrar archivo.
    archivo.close();
    
    cout << "\nOperacion finalizada"
         << " con exito.\n\n";
    
    system("pause");
    return;
}
int main(){
	int op;
	system ("color f9");
	do{
	
	cout<<"\n----------Menu de validacion de archivos----------\n"<<endl;
	cout<<"1. Crear archivo de texto"<<endl;
	cout<<"2. Abrir archivo de texto "<<endl;
	cout<<"3. Buscar archivo de texto "<<endl;
	cout<<"4. Salir del sistema"<<endl;
	cout<<"A continuacion ingrese una opcion a realizar: "<<endl;
	cin>>op;
	system("cls");
	
	switch(op){
		case 1:
			crearArchivo();
			break;
	
	case 2:
		abrirArchivo();
		break;
	case 3:
	buscarArchivo();
	break;
	case 4:
		cout<<"Usted ha salido exitosamente"<<endl;
			break;

	default:
	printf("\nOpcion Incorrecta\n");
	break;
}
}while(op!=4);
}
