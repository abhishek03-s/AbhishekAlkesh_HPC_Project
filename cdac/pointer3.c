#include <stdio.h>

// Functions:
void sum(int*, int*, int*);
int sub(int, int);
int mul(int, int);
int divi(int, int);

int main()
{
    int a = 10, b = 20, result;
    int choice;

    printf("Welcome to Calculator\n");
    printf("1: Add 2: Sub 3: Mul 4: Division\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    // Uncomment to receive user input for a and b
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);

    switch (choice)
    {
        case 1:
            sum(&a, &b, &result);
            printf("Sum = %d\n", result);
            break;
        case 2:
            result = sub(a, b);
            printf("Sub = %d\n", result);
            break;
        case 3:
            result = mul(a, b);
            printf("Mul = %d\n", result);
            break;
        case 4:
            if(b != 0)
            {
                result = divi(a, b);
                printf("Div = %d\n", result);
            }
            else
            {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}

void sum(int* a, int* b, int* result)
{
    *result = *a + *b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    return a / b;
}
