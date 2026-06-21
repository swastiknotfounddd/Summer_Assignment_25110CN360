#include <stdio.h>

int main() {
    int n1, n2, gcd, lcm;

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

    if (gcd == 0) {
        lcm = 0;
    } else {
        // Use division first to avoid potential overflow
        lcm = (n1 / gcd) * n2;
        if (lcm < 0) lcm = -lcm;
    }

    printf("LCM of %d and %d is %d\n", n1, n2, lcm);

    return 0;
}
