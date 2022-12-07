
#include<iostream>
using namespace std;

void escribir(string texto, int n);

int main(){
    string f;
    int n=5;
    cout << "Escriba su nombre o texto que considere." << endl;
 
    getline(cin, f);
       cout<<"\nRecursivamente imprimire su texto 5 veces\n";
    cout << endl;
    escribir(f,n);
}

void escribir(string texto, int n){
    cout << n << " : " << texto << endl;
    n--;
    if (n>0) escribir(texto,n);
    
  }  
