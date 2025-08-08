/*print size of pointer variables and size of values dereferenced by them*/
#include<stdio.h>
int main(void)
{
	char a='x',*p1=&a;
	
	int b=12,*p2=&b;
	
	float c=12.4,*p3=&c;
	
	double d=18.34,*p4=&d;
			// 8				// 1	
	printf("sizeof(p1)=%u, sizeof(*p1)=%d\n",sizeof(p1),sizeof(*p1)); 
				// 8		// 4
	printf("sizeof(p2)=%u, sizeof(*p2)=%d\n",sizeof(p2),sizeof(*p2));
			// 8			// 4	
	printf("sizeof(p3)=%u, sizeof(*p3)=%d\n",sizeof(p3),sizeof(*p3));
			// 8				// 8
	printf("sizeof(p4)=%u, sizeof(*p4)=%d\n",sizeof(p4),sizeof(*p4));
	p1++; // increment by 1 byte
	p2++; // increment by 4 bytes
	p3++; // increment by 4 bytes 
	p4++; // increment by 8 bytes
	return 0;
}

