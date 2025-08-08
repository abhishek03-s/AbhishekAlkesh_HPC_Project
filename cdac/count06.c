#include<stdio.h>

void inputArray(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

int countElement(int arr[], int n, int x) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x)
            count++;
    }
    return count;
}

int main(){
    int n, arr[100];
    int x; // Declare x here

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    inputArray(arr, n);

    printf("Enter the element to count its frequency: "); // Prompt for x
    scanf("%d", &x); // Read the value of x

    int freq = countElement(arr, n, x);
    printf("Frequency of %d in array: %d\n", x, freq);

    return 0;
}