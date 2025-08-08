#include<stdio.h>

int main(){
     
    int arr[5] = {1,2,3,4,5};
    int *p =arr;
    int(*parr)[5]= &arr;
    
     printf("size of (p) = %u\n", sizeof(p));
     printf("size of (p) =%u\n", sizeof(parr));

     printf("size of (*p)= %u\n", sizeof(*p));
     printf("size of (*parr)= %u\n", sizeof(*parr));

     printf("size of (**parr) = %u\n", sizeof(**parr));

     printf("elment at index 0 = %d\n", *(*parr+0));

     for(int i = 0; i<5; i++){
                (*parr)[i] = i; 

               printf("elment at index 0 = %d\n", (*parr)[i]);
               
     }

    return 0;
}