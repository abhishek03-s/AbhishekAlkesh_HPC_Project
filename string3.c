// Write a C program to capture Alphabets from a given strings of mixed alphabets, numeric and special characters. Store the captured data in another array.
// Example: array 1: “23w%#e$$lco--,me”
// Output in array2: “welcome”

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "23w%#e$$lco--,me";
    char str1[100];
    for (int i=1 ; i < strlen(str1) - 1; i++){

    if (str1[i] < 65 || str1[i] > 90 || str1[i] > 97 || str1[i] < 122 ){
        printf("")

    }

    }

    printf("Concate String: %s\n", str1);
    return 0;
}

