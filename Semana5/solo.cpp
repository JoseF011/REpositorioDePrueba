# include <stdio.h>
 
int revnumber( int n){
    int rem , rev_num =0;
 
    for (; n> 0; n= n/10){
        rem = n%10 ;
        rev_num = rev_num*10 + rem;
    }
    return rev_num;
}
int main(){
 
    int num, rev_num = 0  ;
 
    printf("enter the number you wish to reverse:");
    scanf ("%d",&num);
 
    rev_num = revnumber (num);
   
    printf ("reverse of the given number %d is : %d", num , rev_num);
 
    return 0;
}
