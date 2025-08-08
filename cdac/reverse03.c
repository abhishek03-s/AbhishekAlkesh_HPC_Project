#include<stdio.h>

int main(){

    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array that you want reverse\n");

    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    
    }

    printf("The reverce array \n");

    for(int i=n-1; i>=0; i--){

    printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}