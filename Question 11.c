#include <stdio.h>

int main() {
    int n1, n2, gcd;

    printf("Enter two integers: ");
    if (scanf("%d %d", &n1, &n2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    int a = n1;
    int b = n2;
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    printf("GCD of %d and %d is %d\n", n1, n2, gcd);

    return 0;
}
