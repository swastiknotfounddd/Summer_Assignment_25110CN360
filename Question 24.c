#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent;

    printf("Enter base (x) and exponent (n): ");
    if (scanf("%lf %d", &base, &exponent) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    int exp = exponent;
    if (exp < 0) {
        exp = -exp;
    }

    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    if (exponent < 0) {
        if (result == 0) {
            printf("Error: Division by zero.\n");
            return 1;
        }
        result = 1.0 / result;
    }

    printf("%.6lf ^ %d = %.6lf\n", base, exponent, result);

    return 0;
}
