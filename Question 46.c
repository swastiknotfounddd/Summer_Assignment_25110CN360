#include <stdio.h>

// Function to check if a number is an Armstrong number
int is_armstrong(int num) {
    int originalNum = num;
    int n = 0;
    long long result = 0;

    // store the number of digits of num in n
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        long long power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }
        result += power;
        temp /= 10;
    }

    return (result == originalNum);
}

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (is_armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
