#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Welcome to CDAC Pune";
    int len = strlen(str1);
    char temp;
    int i, j;

    // Swap characters from start and end
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }

    printf("Reversed String: %s\n", str1);
    return 0;
}
