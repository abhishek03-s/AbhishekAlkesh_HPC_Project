//Welcome to CDAC Pune

#include<stdio.h>
#include<string.h>
int main(){
int count;
    char str1[] ="Welcome to CDAC Pune";
    char temp;  
    for(int i=0 , j = strlen(str1) - 1 ;i < j;i++,j--){
      
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;    
    }
     printf("Count of Entered String are: %s\n",str1);   
    return 0;
}



