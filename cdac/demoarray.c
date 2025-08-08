#include<stdio.h>
void fun(int);
void function_arr(int arr[], int);
int main(){

	// declare the array
	int var = 10;
	int arr[5] = {1,2,3,4,5}; // arr is an array of 5 integers

	printf("sizeof(arr) = %u\n", sizeof(arr)); //20 => 4(int size)* 5
	
	// access array
	printf("value of arr[0] = %d\n", arr[0]);
	printf("value of arr[1] = %d\n", arr[1]);
	printf("value of arr[2] = %d\n", arr[2]);
	printf("value of arr[3] = %d\n", arr[3]);
	printf("value of arr[4] = %d\n", arr[4]);

	// access array
	printf("Using for loop\n");
	for(int i = 0; i<5 ; i++){
		printf("Value of arr[%d] = %d\n", i,arr[i]);
	}
	printf("&arr[0] = %u\n", &arr[0]);
	printf("&arr[1] = %u\n", &arr[1]);
	printf("&arr[2] = %u\n", &arr[2]);
	printf("&arr[3] = %u\n", &arr[3]);
	printf("&arr[4] = %u\n", &arr[4]);
	 // printf("&arr[5] = %u\n", arr[5]);
	 /*
	 int a,b,c;
	 printf("&a = %u\n", &a);
	 printf("&b = %u\n", &b);
	 printf("&c = %u\n", &c);
	 */

	// user input inside the array
	for(int i=0;i<5;i++){
	scanf("%d", &arr[i]);
	}


	for(int i = 0; i<5 ; i++){
		printf("Value of arr[%d] = %d\n", i,arr[i]);
	}

	// Passing arrays inside functions
	return 0;
}

// define
void function_arr(int arr[] , int size){
	
	// input
	for(int i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<size; i++){
		printf("%d\t", arr[i]);
	}
}

