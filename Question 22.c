#include <stdio.h>

int main() {
    long long binary, temp;
    int decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    if (scanf("%lld", &binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = binary;
    int isNegative = 0;
    if (temp < 0) {
        isNegative = 1;
        temp = -temp;
    }

    while (temp > 0) {
        rem = temp % 10;
        if (rem != 0 && rem != 1) {
            printf("Invalid binary number.\n");
            return 1;
        }
        decimal = decimal + rem * base;
        temp = temp / 10;
        base = base * 2;
    }

    if (isNegative) {
        decimal = -decimal;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
