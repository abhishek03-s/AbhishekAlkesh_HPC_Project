#include<stdio.h>
#include<math.h>

void arm_strong(int a);

int main(){

int a;
printf("Enter a number for arm strong:");
scanf("%d",&a);
 arm_strong(a);
return 0;

}
void arm_strong(int a){
    
    int sum = 0,temp, digit = 0,rem;
    temp = a; 

    
    while(temp !=0){
        rem=temp%10;
        sum+=pow(rem,digit);
        temp = temp / 10;
    }

    if(sum == a){

    printf("its armstrong num");
 }
 else{
    printf("it is not armstrong num");
 }

   
     
}