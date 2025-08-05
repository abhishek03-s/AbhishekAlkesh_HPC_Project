#include<stdio.h>

int main(){

int num;

printf("Enter a number to check leap year or not:");
 scanf("%d",&num);

 if(num%4==0){
    printf("%d its a leap year", num);
 }
 else{
    printf("%d its not a leap year", num);
 }

}