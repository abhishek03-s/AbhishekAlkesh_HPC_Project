#include<stdio.h>
 int fun(int [],int);
int main(){

    int arr[5] ={1,2,3,4,5};
    printf("address of array using arr = %u\n",arr);
    printf("address of array using arr = %u\n",&arr);
    printf("address of array using arr[0] = %u\n",&arr[0]);

 
    for(int i=0;i<5;i++){
       printf("%d\t",arr[i]);
    }

    fun(arr,5);
    for(int i=0;i<size;i++){
       printf("%d\t",arr[i]);
    }
    return 0;

    int fun(int arr[], int size){

        for(int i=0;i<size;i++){
            arr[i] = arr[i] *10;
        }

    }


}



#include <stdio.h>

// Function to input elements into array
void inputArray(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

// 1. Sum of all elements
int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

// 2. Find largest and smallest element
void findMinMax(int arr[], int n, int *min, int *max) {
    *min = *max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > *max) *max = arr[i];
        if(arr[i] < *min) *min = arr[i];
    }
}

// 3. Reverse elements in-place and print
void reverseArray(int arr[], int n) {
    printf("Array in reverse order:\n");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 4. Count even and odd numbers
void countEvenOdd(int arr[], int n, int *even, int *odd) {
    *even = *odd = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

// 5. Search for an element x
int searchElement(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x)
            return 1;  // Found
    }
    return 0;  // Not found
}

// 6. Count frequency of a given element
int countFrequency(int arr[], int n, int x) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x)
            count++;
    }
    return count;
}

int main() {
    int n, arr[100];

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    inputArray(arr, n);

    // 1. Sum of array
    int sum = sumArray(arr, n);
    printf("\n1. Sum of all elements: %d\n", sum);

    // 2. Largest and smallest
    int min, max;
    findMinMax(arr, n, &min, &max);
    printf("2. Smallest: %d, Largest: %d\n", min, max);

    // 3. Reverse
    printf("3. ");
    reverseArray(arr, n);

    // 4. Even and Odd Count
    int even, odd;
    countEvenOdd(arr, n, &even, &odd);
    printf("4. Even count: %d, Odd count: %d\n", even, odd);

    // 5. Search for x
    int x;
    printf("Enter element to search (x): ");
    scanf("%d", &x);
    if(searchElement(arr, n, x))
        printf("5. Element %d is present in the array.\n", x);
    else
        printf("5. Element %d is NOT present in the array.\n", x);

    // 6. Frequency of x
    int freq = countFrequency(arr, n, x);
    printf("6. Frequency of %d in array: %d\n", x, freq);

    return 0;
}
	
