#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    int temp = n;
    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp = temp / 10;
    }

    printf("Sum of digits of %d: %d\n", n, sum);

    return 0;
}
