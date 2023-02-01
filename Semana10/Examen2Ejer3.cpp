# include <stdio.h>
 #include<cstdlib>
 #include<iostream>
 using namespace std;
 int revnumber( int n){
    int rem , rev_num =0;
 
    for (; n> 0; n= n/10){
        rem = n%10 ;
        rev_num = rev_num*10 + rem;
    }
    return rev_num;
}
int main(){ 
 system ("color 0a");
 	int op;
	do{
	cout<<"Ingrese 1 para usar la funcion o -1 para salir: "<<endl;
	cin>>op;
	switch(op){
	case 1:
   int num, rev_num = 0  ;
 
    printf("Ingrese el numero que desea invertir:");
    scanf ("%d",&num);
 
    rev_num = revnumber (num);
   
    printf ("La inversa del numero dado %d es : %d\n\n\n", num , rev_num);
 
 
  
break;
}
}while(op!=-1);
cout<<"Adios"<<endl;

}
