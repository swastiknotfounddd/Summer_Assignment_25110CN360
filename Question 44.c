#include <stdio.h>

// Function to find factorial
long long get_factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Factorial of %d is %lld\n", num, get_factorial(num));

    return 0;
}
