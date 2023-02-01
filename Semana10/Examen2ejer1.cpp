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
    int edad;
    
    cout << "Intro. id cliente "
         << " (0 para terminar) : ";
    cin >> idCliente;
    while(idCliente  > 0)
    {
         cout << "Intro. nombre: ";
         cin >> nombre;
         cout << "Intro. apellido: ";
         cin >> apellido;
         cout << "Intro. edad: ";
         cin >> edad;
         
         // Guardar datos en archivo.
         archivo << idCliente << " "
                 << nombre << " "
                 << apellido << " "
                 << edad << endl;
                 
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
    int edad;
    
    cout << '\n'
         << setw(10) << "Codigo"
         << setw(15) << "Nombre"
         << setw(15) << "Apellido"
         << setw(15) << "Edad"
         << fixed << setprecision(2)
         << endl;
    for(int i=0; i<55; i++)
        cout << '=';
    
    cout << endl;
    
    archivo >> idCliente
            >> nombre
            >> apellido
            >> edad;
            
    while(!archivo.eof())
    {
         cout << setw(10) << idCliente
              << left << setw(15) << nombre
              << setw(15) << apellido
              << right << setw(15) << edad
              << endl;

         
         archivo >> idCliente
                 >> nombre
                 >> apellido
                 >> edad;
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
    int edad;
    
    cout << "Buscar cliente, Id: ";
    cin >> idBuscar;
    
    cout << '\n'
         << setw(10) << "Codigo"
         << setw(15) << "Nombre"
         << setw(15) << "Apellido"
         << setw(15) << "Edad"
         << fixed << setprecision(2)
         << endl;
    for(int i=0; i<55; i++)
        cout << '=';
    
    cout << endl;
    
    archivo >> idCliente
            >> nombre
            >> apellido
            >> edad;
            
    while(!archivo.eof())
    {
         if(idCliente == idBuscar) {
              encontrado = true;
              cout << setw(10) << idCliente
                   << left << setw(15) << nombre
                   << setw(15) << apellido
                   << right << setw(15) << edad
                   << endl;
         }
         
         archivo >> idCliente
                 >> nombre
                 >> apellido
                 >> edad;
    } // Fin de while.
    
    if(!encontrado) {
         cout << "La persona no existe...\n";
    }
    
    // 3. Cerrar archivo.
    archivo.close();
    
    cout << "\nOperacion finalizada"
         << " con exito.\n\n";
    
    system("pause");
    return;
}
void borrarArchivo(){
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
    } // Verificaci?n del archivo.
    
    ofstream archivoTemp("Temp.txt", ios::out);
    
    if(!archivoTemp)
    {
         cout << "Error.  No se pudo"
              << " crear archivo temporal."
              << endl;
         system("pause");
         return;
    } // Verificaci?n del archivo.
    
    // 2. Leer informaci?n.
    int idCliente=0, idBuscar=0;
    char nombre[20], apellido[20];
    int edad;
    
    cout << "Borrar cliente, Id: ";
    cin >> idBuscar;
    
    cout << '\n'
         << setw(10) << "Codigo"
         << setw(15) << "Nombre"
         << setw(15) << "Apellido"
         << setw(15) << "Edad"
         << fixed << setprecision(2)
         << endl;
    for(int i=0; i<55; i++)
        cout << '=';
    
    cout << endl;
    
    archivo >> idCliente
            >> nombre
            >> apellido
            >> edad;
            
    while(!archivo.eof())
    {
         if(idCliente == idBuscar) {
              encontrado = true;
              cout << setw(10) << idCliente
                   << left << setw(15) << nombre
                   << setw(15) << apellido
                   << right << setw(15) << edad
                   << endl;
         }
         else          
              archivoTemp << idCliente
                          << nombre
                          << apellido
                          << edad;
         
         // Buscar mas registros.
         archivo >> idCliente
                 >> nombre
                 >> apellido
                 >> edad;
    } // Fin de while.
    
    if(!encontrado) {
         cout << "\nEl cliente no existe...\n";
    }
    
    // 3. Cerrar archivo.
    archivo.close();
    archivoTemp.close();

    // Procesar archivos.
    if( remove( "Clientes.txt" ) != 0 )
        cout << "\nNo se pudo borrar el archivo." ;
    else 
    {
        cout << "\nArchivo borrado.\n";
                
        if ( rename("Temp.txt" , nombreArchivo.data()) == 0 )
           cout << "\nArchivo Renombrado.";
        else
            cout << "\nNo se pudo renombrar el archivo." ;
    }
        
        
    cout << "\n\nOperacion finalizada"
         << " con exito.\n\n";
    
    system("pause");
}
void listarArchivos(){
		string linea;
		cout<<"Listando Archivos"<<endl;
	fstream archivo("Carburador");
	if(archivo.fail()){
		cout<<"Archivo no puede ser leido"<<endl;
		exit(1);
		
	}
	while(getline(archivo,linea)){
		cout<<"#"<<linea<<endl;
		
	}
	
}
int main(){
	int op;
	system ("color f9");
	do{
	
	cout<<"\n----------Menu de validacion de archivos----------\n"<<endl;
	cout<<"1. Crear archivo de texto"<<endl;
	cout<<"2. Abrir archivo de texto "<<endl;
	cout<<"3. Buscar archivo de texto "<<endl;
	cout<<"4. Borra archivo de texto: "<<endl;
	cout<<"5. Listar"<<endl;
	cout<<"6. Salir del sistema"<<endl;
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
			borrarArchivo();
			break;
			case 5:
				listarArchivos();
			break;
			case 6:
				cout<<"Usted ha salido exitosamente"<<endl;
				break;
	default:
	printf("\nOpcion Incorrecta\n");
	break;
}
}while(op!=6);
}
