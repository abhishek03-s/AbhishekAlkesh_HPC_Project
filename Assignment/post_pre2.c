#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d;

    d = (++a, ++b, ++c, a + 5);

    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
}
