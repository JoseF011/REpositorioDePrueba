#include <iostream> 
#include <vector>
 using namespace std; 
 
 int main() { 
 vector < int > datos; 
 
  // se insertan elementos en el final
  datos.push_back(20);
   datos.push_back(48); 
   datos.push_back(17);
    datos.push_back(5);
	 datos.push_back(36);
	  datos.push_back(12);
	   for( unsigned i=0; i<datos.size(); ++i )
	    cout << datos[i] << endl; // mostrar por pantalla return 0;
	    //eafiuavrszo
	    deque <char> datos; 
		// cargar algunos datos
		 datos.push_front(‘A’); 
		 datos.push_front(‘B’);
		  datos.push_front(‘C’);
		   datos.push_back(65); 
		    datos.push_back(‘Z’);
		   // visualizar el contenido
		    for( uint i=0; i<datos.size(); ++i ) 
			cout << datos[i]; datos.pop_front();
			 // se elimina el primer elemento datos.push_back(‘C’); cout << endl; 
		 } 
		 
