#include<stdio.h>

static int var;
void fun();

int main(){

    var++;
    printf("value of var = %d\n", var);

fun();
return 0;
    

}

void fun(){

    var++;
    printf("value of vars = %d\n", var);

}