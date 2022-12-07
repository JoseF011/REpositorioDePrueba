
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    // Procesos con archivos.
    // 1. Abrir archivo/lectura.
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
         return -1;
    } // Verificaci?n del archivo.
    
    ofstream archivoTemp("Temp.txt", ios::out);
    
    if(!archivoTemp)
    {
         cout << "Error.  No se pudo"
              << " crear archivo temporal."
              << endl;
         system("pause");
         return -1;
    } // Verificaci?n del archivo.
    
    // 2. Leer informaci?n.
    int idCliente=0, idBuscar=0;
    char nombre[20], apellido[20];
    double ingreso;
    
    cout << "Borrar cliente, Id: ";
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
         else          
              archivoTemp << idCliente
                          << nombre
                          << apellido
                          << ingreso;
         
         // Buscar mas registros.
         archivo >> idCliente
                 >> nombre
                 >> apellido
                 >> ingreso;
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
    return 0;
} // Fin de main.

