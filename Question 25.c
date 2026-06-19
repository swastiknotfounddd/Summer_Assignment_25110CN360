#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Must be a non-negative integer.\n");
        return 1;
    }

    printf("Factorial of %d = %lld\n", n, factorial(n));

    return 0;
}
