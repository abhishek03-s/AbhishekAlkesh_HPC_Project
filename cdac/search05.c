#include<stdio.h>

void inputArray(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
int searchElement(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x)
            return 1; 
    }
    return 0;  
}


int main(){

     int n, arr[50];

    printf("Enter number elements (max): ");
    scanf("%d", &n);

    inputArray(arr, n);


 int x;
    printf("Enter element to search (x):");
    scanf("%d", &x);
    if(searchElement(arr, n, x))
        printf("5. Element %d is present in the array.\n", x);
    else
        printf("5. Element %d is NOT present in the array.\n", x);
}

