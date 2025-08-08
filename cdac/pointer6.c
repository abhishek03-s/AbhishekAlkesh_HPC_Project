#include<stdio.h>
int main(){

int x = 10;
void *vptr = &x;

//increment
printf("vptr=%u\n", vptr);
printf("(vptr+1)=%u\n", (int*) vptr+1);

// decrement

// printf("vptr=%u\n", *(int) vptr);
// printf("(vptr+1)=%u\n", *(int*) vptr+1);
printf("x =%u\n ",*( (int*)vptr));
return 0;
}