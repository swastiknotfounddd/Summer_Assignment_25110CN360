#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows (up to 26): ");
    if (scanf("%d", &rows) != 1 || rows < 1 || rows > 26) {
        printf("Invalid input. Must be between 1 and 26.\n");
        return 1;
    }

    for (int i = 1; i <= rows; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
