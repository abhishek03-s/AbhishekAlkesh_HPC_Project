#include<stdio.h>

int main(){
	int x=10;
	int y=5;
	int a; 
	int b;
	
	printf("Value of x = %d\n",x); // x=10
	a = x++;                       // Use first and the increment
	printf("Value of a = %d\n",a); //  a= 10
	printf("Value of x = %d\n",x); //  x=11

	b = ++x;   			// Increment first and then use
	printf("Value of b = %d\n",b); // b =12
	printf("Value of x = %d\n",x); // x = 12
 	y=5;
	b = y--;  
	// b = , y = 
	a = --y;
	// a = , y = 
	return 0;
}

