#include<stdio.h>

int main(){


    char ch = 'a';
	char *cp = &ch;

	// sizeof(ch);// 1
	// sizeof(cp);// 8
	

    printf("&a=%u\n",&ch);
    printf("size of ch = %u\n", sizeof(ch));
     printf("size of cp = %u\n", sizeof(cp));

	float num = 1.2;
	float *fp = &num;
	// sizeof(num)
	// sizeof(fp)
     printf("&a=%u\n",&num);
     printf("size of num = %d\n", sizeof(num));
     printf("size of fp = %d\n", sizeof(fp));


	return 0;
}









