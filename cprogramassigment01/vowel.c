#include<stdio.h>

int main(){
 
    char ch;

     printf("Enter a vowel to check its vowel or not:");
     scanf("%c",&ch);

 if( ch == 'a' || ch == 'e' ||  ch == 'i' ||  ch == 'o'||  ch == 'u'|| ch == 'i'|| ch == 'A'||  ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
 {
    
    printf("%c,its a vowel\n",ch);

 }
 else{
    printf("%c,its not vowel\n",ch);
 }
return 0;
}