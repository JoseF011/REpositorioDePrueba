#include<iostream>
using namespace std;
int main(){
	
	double num1, num2,r;
   double *ptrnum1,*ptrnum2,*ptrr;
	
  /*  double *ptrnum=&num, *ptrnum2=&num2;
    
	cout<<"Numero: "<<num<<num2<<endl;
	cout<<"Hexadecimal: "<<&num<<"\n"<<&num2;*/
		cout<<"Ingrese numero: "<<endl;
	cin>>num1;
	cout<<"Ingrese numero: "<<endl;
	cin>>num2;
	r=num1-num2;
	ptrnum1=&num1;
	ptrnum2=&num2;
	ptrr=&r;
	
	cout<<"Resta: "<<r<<"\nptrResta: "<<ptrr<<endl;
	
	
}

