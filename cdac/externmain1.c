#include<stdio.h>

extern int a;

int main() {
    printf("Value of global_var: %d\n", a);
    return 0;
}