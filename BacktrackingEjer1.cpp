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
    string str = "61951072";
 
    permutations(str, 0, str.length());
 
    return 0;
}
