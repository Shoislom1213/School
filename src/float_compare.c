#include <math.h>
#include <stdio.h>

double fun();

int main() {
    // fun() funksiyasini chaqirishingiz va natijani tekshirishingiz mumkin
    if (fun() < 1E-6) {
        printf("OK!\n");
    }
    return 0;
}

double fun() { return (1.0 / 13) * (pow(((2 - 1.0) / (2 + 1.0)), 20)); }
