#include<stdio.h>
int main(){

    char str[] ="ACTSCDAC";
    int count=0;
    while (str[count] != '\0')
    {
        count++;

    }
    printf("Count of Entered String are: %d\n",count);
    return 0;

}