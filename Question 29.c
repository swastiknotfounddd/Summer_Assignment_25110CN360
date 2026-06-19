#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1 || rows < 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
