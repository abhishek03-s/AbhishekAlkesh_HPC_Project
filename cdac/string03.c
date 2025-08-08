
#include <stdio.h>

int main() {
    char array1[] = "23w%#e$$lco--,me";
    char array2[100]; 
    int i = 0, j = 0;

    
    while (array1[i] != '\0') {
 
        if ((array1[i] >= 'a' && array1[i] <= 'z') || (array1[i] >= 'A' && array1[i] <= 'Z')) {
            array2[j] = array1[i];  
            j++;
        }
        i++;
    }
    
    array2[j] = '\0';  

    printf("Extracted Alphabets: %s\n", array2);

    return 0;
}
