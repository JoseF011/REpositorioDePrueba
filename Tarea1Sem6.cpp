
#include<stdio.h>
int main(void)
{
 
	int n;
	int bin;
	int j=0;
	int k;
 
	int n_tem;
	int n_temp=0;
	int n_temp1=0;
//	char n_tem2;
 
	scanf("%d",&n);
 
 
 
 
/*	//for(n=1;n<=256;n++){
		printf("binario:\n");
 
	for(bin=1;bin<=n;bin*=2)
		j=bin;
	for(j=bin;j>=1;j=(bin/=2)){
 
 
		for(j=bin;j>=1;j=(bin/=2))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
			if(n_tem>=j){
			n_temp1=k/j;
 
			printf("%d",n_temp1);
 
			}
 
		}
 
	}
		printf("\n");*/
	/*octal*/
		printf("octal\n");
	for(bin=1;bin<=n;bin*=8)
		j=bin;
	for(j=bin;j>=1;j=(bin/=8)){
 
 
		for(j=bin;j>=1;j=(bin/=8))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
			if(n_tem>=j){
			n_temp1=k/j;
			printf("%d",n_temp1);
			}
 
		}
		printf("\n");
 
 
	/*	hexadecimal
			printf("hexadecimal\n");
		for(bin=1;bin<=n;bin*=16)
		j=bin;
	for(j=bin;j>=1;j=(bin/=16)){
 
 
		for(j=bin;j>=1;j=(bin/=16))
		{
			n_tem=n;
			k=n_temp;
			n_temp=n_tem%j;
 
			if(n_tem>=j){
			n_temp1=k/j;
 
 
			if(n_temp1==10){
				n_temp1='A';
				printf("%c",n_temp1);
			}
 
			if(n_temp1==11){
				n_temp1='B';
				printf("%c",n_temp1);
			}
 
 
			if(n_temp1==12){
				n_temp1='C';
					printf("%c",n_temp1);
			}
 
 
			if(n_temp1==13){
				n_temp1='D';
				printf("%c",n_temp1);
			}
 
			if(n_temp1==14){
				n_temp1='E';
				printf("%c",n_temp1);
			}
 
 
 
			if(n_temp1==15){
				n_temp1='F';
				printf("%c",n_temp1);
			}
			else if(n_temp1>=0 && n_temp1<=9)
 
					printf("%d",n_temp1);
					}
				}
			printf("\n");
 
		*/
 
	

 
 
 
 
	return 0;
}
}

