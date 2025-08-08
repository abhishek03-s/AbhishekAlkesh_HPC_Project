#include<stdio.h>


int main(){
// char str[10];
// char *p;
// p= str;
// while(*p != '\0'){
//     printf("%c", *p);
//     p++;


// }


char str[] = "abhialkesh";
char *p = str;
int count = 0;

while(str[count] != '\0'){
    printf("%c", *p);
    count++;
}

printf("%c", str);
printf("%d\n", count);

return 0;

}