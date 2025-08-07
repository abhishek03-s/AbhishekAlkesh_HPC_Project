#include<stdio.h>
//main functin created
void fib(int n);


int main()
{
int n;
    printf("enter a enter:");
    scanf("%d",&n);

    //calling function in  main
fib(n);

    return 0;
}
//function initialization
void fib(int n ){


int a =0,b=1;
int c;


    // if(n<=0){
    //     printf("%d",a);
    // }
    // if(n>=1){
    //     printf("%d",b);
    // }

    // int a=0;
    // int b=1;
    // int c=a+b;



    for(int i=0;i<n;i++){

        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
    
       
    
    }
 printf("\n");
}