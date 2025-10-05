#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");

    double x = 6.251, y = 0.827, z = 25.001;
    double b;

    b = pow(y, sqrt(fabs(x))) +
        pow(cos(y), 3) *
        (fabs(x - y) * (1 + pow(sin(z), 2) / sqrt(x + y))) /
        (exp(fabs(x - y)) + x / 2);

    printf("x = %.3f, y = %.3f, z = %.3f\n", x, y, z);
    printf("b = %.4f\n", b);

    return 0;
}