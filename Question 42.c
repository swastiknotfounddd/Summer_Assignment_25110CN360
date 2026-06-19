#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

// Function to find maximum of two numbers
double find_max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    double num1, num2;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Maximum of %.2lf and %.2lf is %.2lf\n", num1, num2, find_max(num1, num2));

    return 0;
}
