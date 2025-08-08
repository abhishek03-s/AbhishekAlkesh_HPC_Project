#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    if (sum > 9)
        return sumDigits(sum);  // recursive call
    else
        return sum;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Recursive sum of digits = %d\n", sumDigits(n));

    return 0;
}