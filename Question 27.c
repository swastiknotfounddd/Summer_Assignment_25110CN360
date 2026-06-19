#include <stdio.h>

int sum_of_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int temp = num;
    if (temp < 0) {
        temp = -temp;
    }

    printf("Sum of digits of %d is %d\n", num, sum_of_digits(temp));

    return 0;
}
