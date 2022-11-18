#include<iostream>
using namespace std;
int main(){
int x=0;
while(x!=30){
	x=x+5;
	cout<<endl;
	
	int coma=0;
	cout<<x;
	while(coma!=x){
		coma++;
		cout<<"*";
		
	}
	cout<<endl;
}
}
