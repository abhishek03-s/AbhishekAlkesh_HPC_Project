#include<stdio.h>

//Pointer arithmetic( try out for various data types )
int main(){
int x=10


int *p=NULL; 

int *p1=NULL;
int *p2=NULL;

// *p1; // seg fault
// *p2; // seg fault
int p = 2000;
p = &x;    	// Assume &x=2000
*p = *p+5;
printf("%d\n",p);

p1 = p+5; 

printf("%d\n", *p1);
p2 = p -5;


p1++; 
printf("%d\n", *p1);

p2--; 
printf("%d\n", *p2);

p1 - p2;
printf("%d\n", *p);
// *p1;
// *p2;
}