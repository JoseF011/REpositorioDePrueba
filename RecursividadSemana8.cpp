#include<iostream>
using namespace std;

void comprobar(char r);

int main(){
    char c;
    cout << "Ingrese un numero: ";
    cin >> c;
    comprobar(c);
    cout << "Recursividad finalizada." << endl;
}

void comprobar(char r){
     int n=int(r);
     if (n>=48 and n<=57) {
        cout << "Correcto, el ingreso es un numero." << endl;
     }
     else {
        cout << "Incorrecto, la tecla pulsada NO es un numero." << endl;
        cout << "repita el proceso : ";
        cin >>r;
        comprobar(r);
     }
}


/*
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
  */
  
  //I al cpp vehiculo creado en clase y ver si se produce recursividad
  
  
  
/*
  //(backtracking) permutaciones ABC
  
#include <iostream>
using namespace std;
 
void permutations(string str, int i, int n)
{
    // condición base
    if (i == n - 1)
    {
        cout << str << endl;
        return;
    }
 
    // procesa cada caracter de la string restante
    for (int j = i; j < n; j++)
    {
        // intercambiar carácter en el índice i con el carácter actual
        swap(str[i], str[j]);        // STL swap() //intercambia el valor de dos variables.
 
        
        permutations(str, i + 1, n);
 
        // retroceder (restaurar la string a su estado original)
        swap(str[i], str[j]);
    }
}
 
int main()
{
    string str = "ABC";
 
    permutations(str, 0, str.length());
 
    return 0;
}
    */
    
//resuelva el problema de sodoku -- celdas que no tengan numeros repetidos

