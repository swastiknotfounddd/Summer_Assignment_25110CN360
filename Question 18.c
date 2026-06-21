#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder;
    long long sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num;

    int temp = num;
    if (temp < 0) {
        printf("%d is not a strong number.\n", num);
        return 0;
    }

    if (temp == 0) {
        printf("0 is not a strong number.\n");
        return 0;
    }

    while (temp != 0) {
        remainder = temp % 10;
        sum += factorial(remainder);
        temp /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
