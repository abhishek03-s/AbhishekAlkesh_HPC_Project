#include<stdio.h>

int main(){

	int a,b,choice;

	printf("Enter two number: ");
	scanf("%d%d",&a,&b);

	printf("Welcome to Calculator\n");
	printf("1: Add 2: Sub 3: Mul 4: Division\n");
	printf("Enter choice: ");
	scanf("%d",&choice);

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

	}
	return 0;
}

