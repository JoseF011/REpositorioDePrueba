
#include <iostream>
using namespace std;
#include <new> //para poder utilizar new y delete
class Punto

{
 public:
  Punto(int X=0,int Y=0)
    {
      establecer(X,Y);
    }
  void establecer(int x1,int y1)
  {
    x = x1;
    y = y1;
  }
  void imprimir(void)
  {
    cout <<"con la coordenadas: "<< "(" << x << "," << y << ")" << endl;
    
  }
 private:
  int x;
  int y;
};
int main(){


  //declaracion e inicializacion
  Punto J(45,-12);

  Punto *ptrQ;
  ptrQ = new Punto(5,7);//este será una pequeña coordenada

  Punto *arreglodePuntos;
  arreglodePuntos = new Punto[10];

  //imprimimos
  cout << "J ";
  J.imprimir();

  cout << "ptrQ ";
  ptrQ->imprimir();
  for (int i = 0 ; i < 10 ; i++)

    {
    	cout<<"--------------------------------------------------"<<endl;
      cout << "Arreglo de puntos en posiciones [" << i <<"] ";
      arreglodePuntos[i].imprimir();

    }
  //liberamos o borramos
  delete ptrQ;
  delete [] arreglodePuntos;

  //fin
  return 0;
}
