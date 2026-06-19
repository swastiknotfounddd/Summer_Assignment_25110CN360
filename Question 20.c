#include <stdio.h>

int main() {
    long long num, n;
    long long maxPrimeFactor = -1;

    printf("Enter an integer >= 2: ");
    if (scanf("%lld", &num) != 1 || num < 2) {
        printf("Invalid input.\n");
        return 1;
    }

    n = num;

    // Divide by 2
    while (n % 2 == 0) {
        maxPrimeFactor = 2;
        n /= 2;
    }

    // Divide by odd numbers starting from 3
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrimeFactor = i;
            n /= i;
        }
    }

    // If remaining n is a prime number greater than 2
    if (n > 2) {
        maxPrimeFactor = n;
    }

    printf("Largest prime factor of %lld is %lld\n", num, maxPrimeFactor);

    return 0;
}
