
#include <stdio.h>

int main() {
    int n;
printf("enter a num: ");
scanf("%d",&n);

for(int rows=1;rows<n;rows++){

    for(int sp=0;sp<=(n-1)-rows;sp++){

        printf(" ");
    }

    for(int col=1;col<=rows;col++){
     
        printf("%d",rows);
    }
    printf("\n");
}
  return 0;
}

