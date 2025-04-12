#include <stdio.h>

int main() {
    float x, y;
    if (scanf("%f %f", &x, &y) != 2) {  // Agar ikkalasi ham kiritilmasa
        printf("n/a\n");
        return 1;
    }

    if (x * x + y * y <= 25) {
        printf("GOTCHA\n");
    } else {
        printf("MISS\n");
    }

    return 0;
}
