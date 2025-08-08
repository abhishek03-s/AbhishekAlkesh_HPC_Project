#include<stdio.h>
void fun(int [][4], int [][4]); // passing a 2-aarray as an argument
void sub(int [][4], int[][4]);
void mul(int [][4], int[][4]);
int main(){
	int arr[3][3][3]; // 3-d array
	int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int arr2[3][4] = {1,1,1,1,1,1,1,1,1,1,1,1};
    fun(arr1, arr2);
    sub(arr1, arr2);
    mul(arr1, arr2);

    return 0;
    
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

void sub(int arr1[][4], int arr2[][4]){
	// find the sub of arr1 and arr2, sub each element
	int sub[3][4]={0};

	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			sub[i][j] = arr1[i][j] - arr2[i][j];
		}
	}
	printf("The array after substraction:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d\t",sub[i][j]);
		}

		printf("\n");
	}
}
void mul(int arr1[][4], int arr2[][4]){
	// find the mul of arr1 and arr2, mul each element
	int mul[3][4]={0};

	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			mul[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
	printf("The array after multification:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d\t",mul[i][j]);
		}

		printf("\n");
	}
}