#include<stdio.h>

int main(){
int num;

printf("Enter a number to check even or odd:");
 scanf("%d",&num);

 if(num%2==0){
    printf("%d its a even number", num);
 }
 else{
    printf("%d its a odd number", num);
 }
}
