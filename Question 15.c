#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main() {
    int num, originalNum, remainder, n = 0;
    long long result = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num;

    // store the number of digits of num in n
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        
        // compute individual power
        long long power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }
        result += power;
        temp /= 10;
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
