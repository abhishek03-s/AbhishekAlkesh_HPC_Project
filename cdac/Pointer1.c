/*print size of pointer variables and size of values dereferenced by them*/
#include<stdio.h>
int main(void)



{
	char a='A' ; char *pch = &a;

    printf("%c%c\n",a,*pch);

	
	int b=12  ; char *cptr = &b;

    printf("%d%d\n",b,*cptr);
 // we cant compatibility btw int and char

 
	float c=12 ; float *fptr = &c;

    printf("%f%f\n",c,*fptr);
	
	double d=1.8 ; double *p4 = &d;

    printf("%lf%lf\n",d,*p4);
     


	return 0;
}

