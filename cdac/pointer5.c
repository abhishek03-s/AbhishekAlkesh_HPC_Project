#include <stdio.h>

int main() {
    unsigned int x;

    printf("enter a unsigned num:");
    scanf("%x\n",&x);
    char *ptr = (char *)&x;     // Cast its address to a char pointer


    if (*ptr == 0x12) {
        printf("System is Little-Endian.%x\n",x);
    } else if (*ptr == 0x44) {
        printf("System is Big-Endian.%x\n",x);
    } else {
        printf("Endianness not easily determined by this method.\n");
    }

    return 0;
}