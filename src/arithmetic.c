#include <stdio.h>

int main(void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a\n");
        return 0;
    }

    printf("%d %d %d ", a + b, a - b, a * b);

    if (b == 0) {
        printf("n/a\n");
    } else {
        printf("%d\n", a / b);
    }

    return 0;
}
