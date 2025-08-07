#include<stdio.h>
int main(){

    int temp,n,rem=0,sum=0;
    printf("\n Enter the number :");
    scanf("%d",&n);


    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);  
        temp = temp / 10;
    }

if(sum==n){
    printf("This number %d is a armstrong number",n);
}
else{
    printf("This number %d is not a armstrong number",n);
}
return 0;
}