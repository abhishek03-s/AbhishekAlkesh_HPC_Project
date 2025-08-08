#include<stdio.h>
int array_addition(int [], int size);
int array_count_oddeven(int [], int size);
int main(){

	int arr[5];

	// array input
	printf("Enter array elements: ");
	for(int i=0;i<5;i++)
		scanf("%d", &arr[i]);
	// print array
	for(int i=0;i<5;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	int sum = array_addition(arr,5);
	printf("Sum = %d\n",sum);

	array_count_oddeven(arr,5);
	return 0;
}

int array_addition(int arr[], int size){
	
	int sum = 0;
	for(int i=0; i<size; i++){
		sum = sum + arr[i];
	}
	return sum;
}
int array_count_oddeven(int arr[], int size){

	int count_even=0,count_odd=0;
// int arr[5] = { 1,5,6,7,8};
// output : even = 2 odd = 3
	for(int i=0;i<size;i++){
		if(arr[i]%2 == 0)
			count_even++;
		else
			count_odd++;
	}
	printf("Even = %d, Odd = %d\n", count_even, count_odd);


}

