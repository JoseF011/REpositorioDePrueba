#include<iostream>
#include <algorithm>
using namespace std;	
const int TAM = 5;
int main()
{
    int array[TAM] = { 10, 500, 350, 740, 91};
    //la variable sort ordena los numeros de menor a mayor, ingresa en el array y los evalua uno a uno
    sort(array, array + TAM);
    cout << "Ordenar datos de forma ascendente: "<<endl;
    for (int i = 0; i != TAM; ++i)
        cout << array[i] << " ";

    return 0;
}


