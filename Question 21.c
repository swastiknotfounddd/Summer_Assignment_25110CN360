#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main() {
    int decimal, temp;
    int binary[32];
    int index = 0;

    printf("Enter a decimal number: ");
    if (scanf("%d", &decimal) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = decimal;
    if (temp == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    int isNegative = 0;
    if (temp < 0) {
        isNegative = 1;
        temp = -temp;
    }

    while (temp > 0) {
        binary[index++] = temp % 2;
        temp /= 2;
    }

    printf("Binary equivalent: ");
    if (isNegative) {
        printf("-");
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
