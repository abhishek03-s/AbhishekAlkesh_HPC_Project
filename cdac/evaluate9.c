#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int d;

    // First case: d = ++a, ++b, ++c, a+5;
    // Due to operator precedence, this is equivalent to:
    // (d = ++a), ++b, ++c, a+5;
    a = 10; b = 20; c = 30;  // reset values
    d = ++a, ++b, ++c, a + 5;
    printf("After d = ++a, ++b, ++c, a+5;\n");
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    // Second case: d = (++a, ++b, ++c, a + 5);
    a = 10; b = 20; c = 30;  // reset values
    d = (++a, ++b, ++c, a + 5);
    printf("After d = (++a, ++b, ++c, a+5);\n");
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
}
