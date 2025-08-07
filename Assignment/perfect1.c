#include<stdio.h>
int main(){

    int n,sum=0;
    printf("\n Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<n;i++){

        if(n%i==0){
             sum=sum+i;
        }

    }
    if(sum == n)
        printf("This %d number is perfect ",n);
    else
       printf("This %d number is  not a perfect ",n);   


    

return 0;
}