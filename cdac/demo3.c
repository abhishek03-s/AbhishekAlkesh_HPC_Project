#include<stdio.h>

int main(){

	// variable sizez array
	int arr1[50]; // 50x4 = 200 bytes

	// used on 10 loactions => 10*4 = 40 bytes
	// wasted = 200 - 40 = 160 bytes
	// above proble, we can solve in dynamic memeory allocation
	
	/*
	int n; // n is local variable, has garbage value
	int arr2[n]; // undefined size of the array
	*/

	// ideally,
	// Memory for arrays has be allocated during compile time, & not run time
	//int n;                                                                              
	// printf("Enter the value of n: ");
	// scanf("%d", &n);  // value of n is given on run-time
	// int arr3[n];  // allocating memory for array during run-time
	
	 int arr4[50]; // compile time memory allocation for array

	// 10 inputs
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);

	for(int i=0; i<n ;i++){
		scanf("%d", &arr4[i]);
	}
    
    for(int i=0; i<n ;i++){
		printf("%d\t", arr4[i]);
        
	}
    


}











