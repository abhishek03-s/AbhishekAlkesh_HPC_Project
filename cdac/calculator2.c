
#include<stdio.h>

//fun declaer
void cal(int a,int b,int choice);

int main(){
int a,b,choice;
char again;
	
    printf("Welcome to Calculator\n");
	printf("Enter two number:\n ");
	scanf("%d%d",&a,&b);
	   
do{

    printf("Enter choice:\n ");
    printf("1: Add 2: Sub 3: Mul 4: Division\n");
	scanf("%d",&choice);
    
    cal(a,b,choice);

    if(choice !=0){
		 printf("Do you want to do agin? (y/n)\n");
            scanf(" %c", &again); 
        } else {
            again = 'n'; 
        }

    } while (again == 'y');

    printf("Cal exited\n");
    return 0;
}

//intizalation fun
void cal(int a, int b, int choice){

	switch(choice){
		case 1: int sum = a+b;
			printf("Sum = %d\n",sum);
			break;
		case 2: int sub = a-b;
			printf("Sub = %d\n",sub);
			break;
		case 3: int mul = a*b;
			printf("Mul = %d\n",mul);
			break;
		case 4: float div = (float)a/b;
			// float div = a/b;
			printf("Div = %f\n",div);
			break;
        
        default:
            printf("invaild choice");
            break;
        
             	} 
     }


    
