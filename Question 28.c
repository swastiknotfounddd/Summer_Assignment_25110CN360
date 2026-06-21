#include <stdio.h>

int reverse_number_helper(int n, int temp) {
    if (n == 0) {
        return temp;
    }
    return reverse_number_helper(n / 10, temp * 10 + n % 10);
}

int reverse_number(int n) {
    return reverse_number_helper(n, 0);
}

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int temp = num;
    int isNegative = 0;
    if (temp < 0) {
        isNegative = 1;
        temp = -temp;
    }

    int reversed = reverse_number(temp);
    if (isNegative) {
        reversed = -reversed;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
