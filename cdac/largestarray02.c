#include<stdio.h>
#include<limits.h>

int fun(int *arr,int n){
    int lar = INT_MIN;
    int small = INT_MAX;

    for(int i=0;i<n;i++){
        
        if(arr[i]>lar){
            lar = arr[i];
        }
        if(arr[i]<small){
            small = arr[i];
        }
    }
    printf("The smallest value of array: %d\n",small);
    printf("The largest value of array: %d\n",lar);
}


int main(){

    int n;
    printf("enter a size of array\n");
    scanf("%d",&n);


    int arr[n];
    printf("enter the array that u want lagest and smaller\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    fun(arr,n);
    return 0;


}


