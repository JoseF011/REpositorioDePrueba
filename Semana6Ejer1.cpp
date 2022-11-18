#include<iostream>
using namespace std;
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
	
	cout<<"\nSuma: "<<s<<"\nptrSuma: "<<ptrs<<endl;
	cout<<"\nResta: "<<r<<"\nprtResta: "<<ptrr<<endl;
	cout<<"\nMultiplicacion: "<<m<<"\nprtMultiplicacion: "<<ptrm<<endl;
	cout<<"\nDivision: "<<d<<"\nprtDivsion: "<<ptrd<<endl;
	
}
