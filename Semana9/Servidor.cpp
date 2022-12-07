
/*
* . Las directivas #pragma proporcionan un método para que cada compilador 
	ofrezca características específicas del equipo o del sistema operativo
*/

/*
* directivas pragma son específicas de la máquina o del sistema operativo 
específico por definición, y normalmente son diferentes para cada compilador.
* 
* 
* Es la razon por la que no funcion acon compiladores como g++ o gcc , este codigo se testeo 
* en Visual Studio C++ , a raiz de un hilo donde explicaba el problema el por que no compilaba con otros compiladores
* encontado en StacOVerflow 
* 
* https://stackoverflow.com/questions/18559028/undefined-reference-to-imp-wsacleanup
*/
#pragma comment(lib, "Ws2_32.lib")


#include <WS2tcpip.h>
#include <WinSock2.h>
#include <Windows.h>
#include <iostream>
#include <tchar.h>  

using namespace std;

//el tipo de variables aqui especificadas se encuentar en el archivo de ancabezado <WinSock2> estos son estructuras 
//******************************

SOCKADDR_IN addr;  //The SOCKADDR_IN structure specifies a transport address and port for the AF_INET address family.
SOCKET sListen;  //El escucha que estare pendiente de conexiones entarntes
SOCKET sConnect; //Variable que sirve para conectar con los clientes 
SOCKET Connections; //para las conexiones que se acepten 
//**************************************

/// <summary>
/// /Variable para identificar el tipo de direcion ip
/// </summary>
int addrlen = sizeof(addr);
int ConCounter = 0;

/// <summary>
/// buffer para enviar datos al querer un cliente conectarse , se responde con lo almacenado aqii
/// </summary>
struct Buffer
{
	char dat[500];
};

int InitWinSock()
{
	/// <summary>
	/// Se inicia el socket que dara inicio a las conexiones entarntes 
	/// </summary>
	/// <returns></returns>
	int RetVal = 0;
	WSAData wsaData;
	WORD DllVersion = MAKEWORD(2, 1);

	//devolvera un entero 0 o 1 si la creacion es exitosa 
	RetVal = WSAStartup(DllVersion, &wsaData);

	//lo retorna 
	return RetVal;
}

int main()
{
	int RetVal = 0;
	RetVal = InitWinSock();
	//SI hay erroro se mansa mensaje por consola y se slae 
	if (RetVal != 0)
	{
		cout << "Error, no se puede conectar al servidor" << endl;
		system("PAUSE");
		exit(1);
	}


	/// <summary>
	/// a función C calloc() significa asignación contigua. 
	/// Esta función se utiliza para asignar múltiples bloques de memoria.
	///  Es una función de asignación de memoria dinámica que se utiliza para asignar la memoria 
	/// a estructuras de datos complejas como arrays y estructuras.ENe ste caso las conexiones entrantes 
	/// </summary>
	/// <returns></returns>
	Connections = (SOCKET)calloc(1, sizeof(SOCKET));

	//configuracion de puerto de escucha 
	sListen = socket(AF_INET, SOCK_STREAM, 0);

	//COnecta el socket para transmision de data 
	sConnect = socket(AF_INET, SOCK_STREAM, 0);

	//Esta forma no compila 
	//addr.sin_addr.s_addr = inet_addr("127.0.0.1");

	//Se configura la direccion del servidor que recibira las conexione s
	//Recordar que esta es la direciion del LocalHost por lo que solo funcion en la LAN donde nos encontremos 
	//AF_INET hace la conversion necesari , y la macro _T es para evitar secuencia de escape , luego la expresion de retono se almacena enla direccion de memoria 
	InetPton(AF_INET,_T("127.0.0.1"), &addr.sin_addr.s_addr);

	//establecemos el puerto de escucha
	addr.sin_port = htons(1234);

	//Tipo de familia de transmision UDP, TCP ,etc
	//UDP---User Datagram Protocol (UDP) 
	//TCP--- protocolo de transmision de datos 
	addr.sin_family = AF_INET;

	/// <summary>
	/// Tanto connect() como bind() llaman al sistema 'asociar' el descriptor de archivo de socket a una dirección 
	/// (típicamente una combinación de ip/puerto
	/// </summary>
	/// <returns></returns>
	bind(sListen, (SOCKADDR*)&addr, sizeof(addr));

	listen(sListen, 1);

	//Bucle infinito ayuda amnatenerse en modo escucha para establecer conexion 

	for (;; Sleep(50))
	{

		//Se acepta la conexion , con los parametros que le pasamos 
		if (sConnect = accept(sListen, (SOCKADDR*)&addr, &addrlen))
		{
			cout << "La coneccion a sido establecida" << endl;
			cout << "Informacion ingresada por el cliente" << endl;


			//actualiza cada 0.1 segundo 
			for (;; Sleep(50))
			{

				//nuevo buffer 
				Buffer sbuffer;

				//Array de 1byte 
				char* Recv = new char[256];

				//alojado en esta direcion especial de la memoria 
				ZeroMemory(Recv, 256);

				//se recibe la informacion enviada del cliente 
				if (recv(sConnect, Recv, 256, 0))
				{
					cout << Recv << endl;
					ZeroMemory(Recv, 256);
				}
			}
		}
	}
	return 0;
}

