#include<stdio.h>
void fun(int [][4], int [][4]); // passing a 2-aarray as an argument
void sub();
void mul();
int main(){
	int d[3][3][3]; // 3-d array
	int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int arr2[3][4] = {1,1,1,1,1,1,1,1,1,1,1,1,1};


}
void fun(int arr1[][4], int arr2[][4]){
	// find the sum of arr1 and arr2, sum each element
	int sum[3][4]={0};

	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("The array after addition:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}

