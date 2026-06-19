#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

// Function to find the sum of two numbers
double find_sum(double a, double b) {
    return a + b;
}

int main() {
    double num1, num2;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Sum of %.2lf and %.2lf is %.2lf\n", num1, num2, find_sum(num1, num2));

    return 0;
}
