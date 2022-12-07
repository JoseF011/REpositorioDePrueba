#include<iostream>
using namespace std;
long decimalToOctal(long n) {
    int remainder; 
    long octal = 0, i = 1;
   
    while(n != 0) {
        remainder = n%8;
        n = n/8;
        octal = octal + (remainder*i);
        i = i*10;
    }
    return octal;
}
long decimalToBinary(long n) {
    int remainder; 
    long binary = 0, i = 1;
   
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}
int main(){
	//calculadora
	
	double n1,n2,s,r,m,d;
	double *ptrn1,*ptrn2,*ptrs,*ptrr,*ptrm,*ptrd;

	cout<<"Ingrese numero: "<<endl;
	cin>>n1;
	cout<<"Ingrese numero: "<<endl;
	cin>>n2;
	
	s=n1+n2;
	r=n1-n2;
	m=n1*n2;
	d=n1/n2;

	ptrn1=&n1;
	ptrn2=&n2;
	ptrs=&s;
	ptrr=&r;
	ptrm=&m;
	ptrd=&d;
	
	cout<<"\nSuma: "<<s<<"\nHexadecimal Suma: "<<ptrs<<"\nOctal: "<<decimalToOctal(s)<<"\nBinario: "<<decimalToBinary(s)<<endl;
	cout<<"\nResta: "<<r<<"\nHexadecimal Resta: "<<ptrr<<"\nOctal: "<<decimalToOctal(r)<<"\nBinario: "<<decimalToBinary(r)<<endl;
	cout<<"\nMultiplicacion: "<<m<<"\nHexadecimal Multiplicacion: "<<ptrm<<"\nOctal: "<<decimalToOctal(m)<<"\nBinario: "<<decimalToBinary(m)<<endl;
	cout<<"\nDivision: "<<d<<"\nHexadecimal Divsion: "<<ptrd<<"\nOctal: "<<decimalToOctal(d)<<"\nBinario: "<<decimalToBinary(d)<<endl;
	
}
