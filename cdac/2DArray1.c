#include<stdio.h>

int main(){

   int arr1[3][4];

   

    for(int i =0;i<3;i++){
        for(int j=0;j<4;j++){
         
            scanf("%d\t",&arr1[i][j]);
        } 
    }

    for(int i =0;i<3;i++){
        for(int j=0;j<4;j++){
         
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;

}