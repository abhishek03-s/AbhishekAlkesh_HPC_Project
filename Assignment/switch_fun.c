#include<stdio.h>
int main(){
    int a,b,choise;

    printf("\n Enter the two numbers:-");
    scanf("%d%d",&a,&b);

    printf("Welcome to the Calcultor\n");

    printf("1:Addition  2:Substraction  3:Multiplication  4:Division\n");

    printf("Enter your choice :-");
    scanf("%d",choise);

    switch (choise)
    {
    case 1:
        int sum=a+b;
        printf("Addition of two number is:-  ",sum);
    
        break;
    
    default:
        break;
    }

}