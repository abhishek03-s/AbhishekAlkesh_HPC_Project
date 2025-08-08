#include <stdio.h>

// int main() {
//     char str[] = "Welcome to CDAC Pune";
//     int length = 0;


//     while (str[length] != '\0') {
//         length++;
//     }

//     for (int i = 0; i < length / 2; i++) {
//         char temp = str[i];
//         str[i] = str[length - 1 - i];
//         str[length - 1 - i] = temp;
//     }

//     printf("Reverse string: %s\n", str);

//     return 0;
// }



#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Welcome to CDAC Pune";
    char temp;

    int length = strlen(str1);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }

    printf("reverse %s\n", str1);
    return 0;
}
