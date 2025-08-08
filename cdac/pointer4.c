#include<stdio.h>

int main(){

// const int *p;
// int y = 500;
// const int x = 10;
// //*p = 10; // not allowed
// p = p +1;
// p = &y;
// printf("%d\n", x);



int const *p;
int y = 500;
int const x = 10;
p = &x;
p = p+1;
p= &y;
printf("%d\n", x);



// int *const p;
// int y = 500;
// const int x = 10;
// p = &x;

// printf("%d\n", x);




// const int *const p;
// int y = 500;
// const int x = 10;
// p = &x;

// printf("%d\n", x);

return 0;

}