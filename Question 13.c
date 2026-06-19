#include <stdio.h>

int main() {
    int n;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input or number of terms must be >= 1.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%lld", t1);
        if (i < n) {
            printf(", ");
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}
