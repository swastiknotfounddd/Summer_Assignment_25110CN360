#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

long long recursive_fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    if (scanf("%d", &terms) != 1 || terms < 1) {
        printf("Invalid input. Must be >= 1.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%lld", recursive_fibonacci(i));
        if (i < terms - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
