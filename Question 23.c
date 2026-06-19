#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main() {
    int num, temp, count = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = num;
    unsigned int n = (unsigned int)temp;

    while (n > 0) {
        n &= (n - 1);
        count++;
    }

    printf("Number of set bits in %d is %d\n", num, count);

    return 0;
}
