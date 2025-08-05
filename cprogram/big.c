#include<stdio.h>

int main(){

    int a,b,c;

    printf("enter first num:");
    scanf("%d",&a);

    printf("enter second num:");
    scanf("%d",&b);
    printf("enter third num:");
    scanf("%d",&c);
if(a>=b && a>=c){
    printf("%d is a biggest num\n",a);

}
else if (b>=c && b>=a){
  printf("%d is a biggest num\n",b);
}
else{

    printf("%d is a biggest num\n",c);

}

    return 0;
}