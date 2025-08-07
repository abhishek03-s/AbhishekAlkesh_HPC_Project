#include<stdio.h>
int main(){
    int a,b,choice;


    printf("Enter the two numbers:-");
    scanf("%d%d",&a,&b);

    printf("Welcome to the Calcultor\n");

    printf("1:Addition  2:Substraction  3:Multiplication  4:Division\n");

    printf("Enter your choice :-");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        int sum=a+b;
        printf("Addition is:- %d\n",sum);
        break;
    case 2:
        int sub=a-b;
        printf("Substraction is:-%d\n",sub);
        break;
    case 3:
        int mult=a*b;
        printf("multiplication is: %d\n",mult);
        break;
    case 4:
        // float div = (float)a/b;
        float div =a/b; 
        printf("division is: %f\n",div);
        break;
        
}
return 0;

}