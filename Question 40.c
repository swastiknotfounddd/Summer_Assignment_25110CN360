#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows (up to 26): ");
    if (scanf("%d", &rows) != 1 || rows < 1 || rows > 26) {
        printf("Invalid input. Must be between 1 and 26.\n");
        return 1;
    }

    for (int i = 1; i <= rows; i++) {
        // spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // ascending characters
        for (int k = 0; k < i; k++) {
            printf("%c", 'A' + k);
        }
        // descending characters
        for (int m = i - 2; m >= 0; m--) {
            printf("%c", 'A' + m);
        }
        printf("\n");
    }

    return 0;
}
