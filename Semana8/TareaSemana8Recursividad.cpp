#include<iostream>
using namespace std;

void recursividad(string texto, int n); //recursividad 
void repeticion();
int n=3;
int aux=3;
 string f;

int main(){
    repeticion();
    

}
void recursividad(string texto, int n){ //recursividad 
 
    cout << n << " : " << texto << endl;
    n--;
    if (n>0) recursividad(texto,n); //recursividad 
    
  } 
  
void repeticion(){
 cout << "Escriba el nombre de pais: " << endl;
 
    getline(cin, f);
       cout<<"\nA continuacion, su nombre se repetira de forma recursiva 3 veces\n";
    cout << endl;
 recursividad(f,n); //recursividad
 cout<<endl;
 aux--;
 if(aux>0){
repeticion();
 }
}


