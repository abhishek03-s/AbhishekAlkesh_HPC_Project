#include<stdio.h>

int main(){
 printf("hello mic check");
int a,b,temp;
 printf("Enter a:");
 scanf("%d",&a);

  printf("Enter b:");
 scanf("%d",&b);

 temp=a;
 a=b;
 b=temp;

 printf("after swapping a=%d,b=%d",a,b);
 return 0;
}