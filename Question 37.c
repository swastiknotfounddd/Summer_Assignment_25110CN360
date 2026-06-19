#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1 || rows < 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= rows; i++) {
        // spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
