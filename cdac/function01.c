#include<stdio.h>
#include<math.h>
// declare the function
// return_type fucntion_name(arguments...);
void fun(int); 
// fun is function that takes one integer as argumnet and return nothing
int add(int,int); 
// add is a function which takes 2 ints as argumnets and return a int
float fun1(int,float,char);
//sub is a function which takes 2 ints as argumnets and return a int
int sub(int,int);
//vowel 
char ch();
//evenodd
int evenodd(int);
//leap year
int leapyear(int num);
//swapping
int swap(int,int);


int main(){
      
	fun(2);
	fun(5);
	fun(12);
	fun1(8,23.56,'a');
	// fun1(23.45,'a',5); // not correct
	int result = a#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    if (sum > 9)
        return sumDigits(sum);  // recursive call
    else
        return sum;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Recursive sum of digits = %d\n", sumDigits(n));

    return 0;
}dd(5,6);
	return 0;
}
// definition of funtion
void fun(int num){
	// square of num
	int square = num * num;
	printf("square of num = %d\n",square);

}

int add(int a, int b){
	int sum = a+b;
	return sum;
    
}

float fun1(int  var,float val,char ch)
{
	return val;
}


int sub(int a, int b){
	int sub = a-b;
	return sub;
}


char ch(){


 if( ch == 'a' || ch == 'e' ||  ch == 'i' ||  ch == 'o'||  ch == 'u'|| ch == 'i'|| ch == 'A'||  ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
 {
    
    printf("%c,its a vowel\n",ch);

 }
 else{
    printf("%c,its not vowel\n",ch);
 }
}



int evenodd(int num);{


printf("Enter a number to check even or odd:");
 scanf("%d",&num);

 if(num%2==0){
    printf("%d its a even number", num);
 }
 else{
    printf("%d its a odd number", num);
 }
}


int leapyear(int num){


printf("Enter a number to check leap year or not:");
 scanf("%d",&num);

 if(num%4==0){
    printf("%d its a leap year", num);
 }
 else{
    printf("%d its not a leap year", num);
 }

}


int swap(int a, int b){

	 printf("swapping num");
int a,b,temp;
 printf("Enter a:");
 scanf("%d",&a);

  printf("Enter b:");
 scanf("%d",&b);

 temp=a;
 a=b;
 b=temp;

 printf("after swapping a=%d,b=%d",a,b);
}



#include <stdio.h>

// Function declaration
void cal(int a, int b);

int main() {
    int a, b; // Declare a and b here

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Function call with arguments
    cal(a, b);

    return 0;
}

// Function definition
void cal(int a, int b) { // Accept a and b as arguments
    int choice; // Declare choice here

    printf("Welcome to Calculator\n");
    printf("1: Add 2: Sub 3: Mul 4: Division\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            int sum = a + b;
            printf("Sum = %d\n", sum);
            break;
        case 2:
            int sub = a - b;
            printf("Sub = %d\n", sub);
            break;
        case 3:
            int mul = a * b;
            printf("Mul = %d\n", mul);
            break;
        case 4:
            if (b != 0) { // Prevent division by zero
                float div = (float)a / b;
                printf("Div = %f\n", div);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 0:
            printf("Calculator exited.\n"); // Corrected exit message
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}


#include <stdio.h>

// Function declaration
void cal(int a, int b, int choice);

int main() {
    int a, b, choice;
    char again;

    printf("Welcome to Calculator\n");
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);

    do {
        printf("\n");
        printf("Enter choice:\n");
        printf("1: Add 2: Sub 3: Mul 4: Division 0: Exit\n");
        scanf("%d", &choice);

        // Call the function to perform the calculation
        cal(a, b, choice);

        if (choice != 0) {
            printf("Do you want to perform another calculation with the same numbers? (y/n)\n");
            scanf(" %c", &again); // Note the space before %c to consume the newline character
        } else {
            again = 'n'; // Exit the loop if the user chose to exit
        }

    } while (again == 'y' || again == 'Y');

    printf("Calculator exited. Goodbye!\n");
    return 0;
}

// Function definition
void cal(int a, int b, int choice) {
    switch (choice) {
        case 1:
            printf("Sum = %d\n", a + b);
            break;
        case 2:
            printf("Subtraction = %d\n", a - b);
            break;
        case 3:
            printf("Multiplication = %d\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Division = %.2f\n", (float)a / b);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;
        case 0:
            printf("Exiting calculator.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}