#include<iostream>
using namespace std;
int main(){
int n1,n2;
cout<<"Ingrese el primer valor: "<<endl;
cin>>n1;
cout<<"Ingrese el segundo valor: "<<endl;
cin>>n2;
if(n1>n2){
	cout<<n1<<" Es mayor "<<endl;	
	cout<<n1<<" No es igual a "<<n2<<endl;
}	
if(n2>n1){
	cout<<n2<<" Es mayor"<<endl;
	cout<<n2<<" No es igual a "<<n1<<endl;
}
if(n1==n2){
	cout<<n1<<" y "<<n2<<" Son iguales "<<endl;
}
}
