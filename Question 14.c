#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main() {
    int n;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the term position (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Position must be >= 1.\n");
        return 1;
    }

    if (n == 1) {
        printf("The 1st Fibonacci term is %lld\n", t1);
        return 0;
    }
    if (n == 2) {
        printf("The 2nd Fibonacci term is %lld\n", t2);
        return 0;
    }

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("The %dth Fibonacci term is %lld\n", n, t2);

    return 0;
}
