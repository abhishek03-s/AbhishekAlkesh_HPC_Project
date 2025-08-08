#include <stdio.h>

int main() {
    int i = 5, x = 5, p = 9;
    int k, y, q;

    // a)
    k = i++;
    printf("k = i++ : k = %d, i = %d\n", k, i);
    i = 5; // reset
    k = ++i;
    printf("k = ++i : k = %d, i = %d\n", k, i);

    // b)
    x = 5;
    y = x++ * 10;
    printf("y = x++ * 10 : y = %d, x = %d\n", y, x);
    x = 5;
    y = ++x * 10;
    printf("y = ++x * 10 : y = %d, x = %d\n", y, x);

    // c)
    p = 9;
    q = p-- / 3;
    printf("q = p-- / 3 : q = %d, p = %d\n", q, p);
    p = 9;
    q = --p / 3;
    printf("q = --p / 3 : q = %d, p = %d\n", q, p);

    return 0;
}