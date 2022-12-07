#pragma comment(lib, "Ws2_32.lib") //DLl de SIstema Operativo usado 
#include <WinSock2.h> //libreria para sockets en windows
#include <Windows.h> 
#include <iostream>
#include <tchar.h> //encabezado para la macro_T
#include <WS2tcpip.h>  //Encabezado necesario para trabajar con conexiones usando el protocolo TCP/IP

using namespace std;

SOCKADDR_IN addr;  //Declaracion de variable que sera la direccion de l aconexion entrante
SOCKET sConnect;  //Variable que srive para conectar cliente-servidor

struct Buffer
{
	char dat[500];  //Buffer de datos encargado de transmitir , ojo que puede haber desbordamiento de buffer al ser mayor de 500
};

int main()
{
	system("cls"); //limpia pantalla 

	int RetVal = 0;

	WSAData wsaData; //tipo definido en el encabezado de winsock para transmision de data 
	WORD DllVersion = MAKEWORD(2, 1); //
	RetVal = WSAStartup(DllVersion, &wsaData); //Se intenta conectar al server con funciones propias de la dll y se manda el buffer de datos 
	if (RetVal != 0)  //si la respuesta del servidor al envio de datos fue satisfactoria  no se ejecuta el if , caso contario
	{
		cout << "Error, no se puede conectar al servidor" << endl; //manda este mensaje de advertencia , posible el servidor este shut_down o inaccesible para la direccion especificada
		system("PAUSE");//pausa el programa
		exit(1); //sale del programa 
	}

	sConnect = socket(AF_INET, SOCK_STREAM, 0);//si la respuesta del servidor es positova se inicia la transmision de datos ,llamando al socket
												//y pasandole los parametros direcion ipv4 del servidor y el buffer inicial de datos que se envia para determinar si el servidor esta encendido

	//addr.sin_addr.s_addr = inet_addr("127.0.0.1");--------Correcion del codigo ya que la conversion es mala 
	InetPton(AF_INET, _T("127.0.0.1"), &addr.sin_addr.s_addr); //direccion io4 del servidor
	addr.sin_port = htons(1234); ///puerto usado para la conexion
	addr.sin_family = AF_INET; //se declara que usamos la familia de direcciones ipv4 definidas en el modo OSI a nivel de aplicacion con el protocolo TCP/IP

	cout << "Aprete el boton [ENTER] para establecer la coneccion con el servidor" << endl;
	getchar();
	RetVal = connect(sConnect, (SOCKADDR*)&addr, sizeof(addr));//SI el usuario da enter se manda a llamar a la coneccion 

	if (RetVal != 0)
	{
		cout << "Error, no se puede conectar al servidor" << endl; //si la conexion arroja error  se muestra el mensaje
		system("PAUSE");
		main();
	}
	else
	{

		cout << "Se a conectado correctamente!!!" << endl; //caso contario a errores manda mensaje de exito 
		cout << "Ingrese la informacino deseada:" << endl; //Pide informacion a enviar 


		for (;; Sleep(10))  //bucle infinito que ejecuta cada 0.1 segundos
		{
			char* buffer = new char[256]; //buffer de datos 
			ZeroMemory(buffer, 256); //sector de memoria que aloja los datos del buffer 

			cin >> buffer;  //ingresamos los datos a enviar
			getchar(); 

			send(sConnect, buffer, 256, 0); //envia la informacion a traves del socket con los datos introducidos 
		}
	}										//metodo send es parte de winsock para enviar stream.

	return 0;
}
