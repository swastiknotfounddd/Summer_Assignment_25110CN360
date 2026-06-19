#include <stdio.h>

// Function to print Fibonacci series up to n terms
void print_fibonacci(int n) {
    long long t1 = 0, t2 = 1, nextTerm;

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
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    print_fibonacci(n);

    return 0;
}
