#include<stdio.h>
int main(){

    int hours,minuts,seconds,total_sec;


    printf("Enter the hour\n , minutes\n and second :\t");
    scanf("%d%d%d",&hours,&minuts,&seconds);


    if(hours>0 && hours<=24 && minuts>0 && minuts<59 && seconds>0 && seconds<59){
        hours = hours * 3600;
        minuts=minuts*60;
        total_sec=hours+minuts+seconds;
    
    }

    printf("Total Second:\t%d\n",total_sec);
    return 0;
    

    
}