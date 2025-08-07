#include<stdio.h>
#include<stdlib.h>
void calculate(int,int);
int main(){
   int a,b;
   printf("Enter The Two Number :");
    scanf("%d%d",&a,&b);
    calculate(a,b);
    
    return 0;
}

void calculate(int n, int m){
    int a = n;
    int b = m;
    int choice;
    char again;

do {


    printf("1:Addition  2:Substrac tion  3:Multiplication  4:Division\n 5.Mod");

    printf("Enter your choice :-");
    scanf("%d",&choice);

   
    switch (choice)
    {
    case 1:
        int add=a+b;
        printf("Addition of two numbers %d \n:-",add);
        break;
    
    case 2:
        int sub=a-b;
        printf("Substraction of two numberts:- %d \n",sub);
        break;
    
    case 3:
        int mul=a*b;
        printf("Multiplication of two numbers :- %d \n",mul);
        break;

    case 4:
        float div=a/b;
        printf("Division of two numbers:- %f\n",div);
        break;

    case 5:
        float mod=a%b;
        printf("Mod of two number %f :-\n",mod);
        break;
        
    default:
        printf("Invalid  Input");
        
        break;
    }
    getchar();
    printf("Do you want to calculate again Y or N :");
    scanf("%c",&again);

    if(again=='n' ){
        exit(0);
    
    }


}while (again != 'y'|| again !='Y');
printf("exit code");
// return 0;

}

   


